#include "phonebook.hpp"

Phonebook s1;

bool  contacte::phone_number_validation(std::string &number)
{
  size_t i;

  if (number.empty())
  {
    return(false);
  }
  i = 0;
  while (i < number.length())
  {
    if (number[i] < '0' || number[i] > '9')
      return(false);
    i++;
  }
  return(true);
}

void  contacte::set_contact_info()
{
  std::cout << "Enter first name : ";
  if (!getline(std::cin, first_name))
  {
    std::cout <<  "\033[1;36m" << "EOF detected. Exiting..." << std::endl;
    exit(0);
  }
  while (first_name.empty())
  {
    std::cout <<  "First name cannot be empty. Enter first name: ";
    if (!getline(std::cin, first_name))
    {
      std::cout <<  "\033[1;36m" << "EOF detected. Exiting..." << std::endl;
      exit(0);
    }
  }

  std::cout << "Enter last name : ";
  if (!getline(std::cin, last_name))
  {
    std::cout <<  "\033[1;36m" << "EOF detected. Exiting..." << std::endl;
    exit(0);
  }
  while (last_name.empty())
  {
    std::cout <<  "last name cannot be empty. Enter last name: ";
    if (!getline(std::cin, last_name))
    {
      std::cout <<  "\033[1;36m" << "EOF detected. Exiting..." << std::endl;
      exit(0);
    }
  }

  std::cout << "Enter the nickname : ";
  if (!getline(std::cin, nickname))
  {
    std::cout <<  "\033[1;36m" <<"EOF detected. Exiting..." << std::endl;
    exit(0);
  }
  while (nickname.empty())
  {
    std::cout <<  "nickname cannot be empty. Enter nickname : ";
    if (!getline(std::cin, nickname))
    {
      std::cout <<  "\033[1;36m" << "EOF detected. Exiting..." << std::endl;
      exit(0);
    }
  }
  std::cout << "Enter the phone number : ";
  if (!getline(std::cin, phone_number))
  {
    std::cout <<  "\033[1;36m" <<"EOF detected. Exiting..." << std::endl;
    exit(0);
  }
  while (phone_number.empty() || !phone_number_validation(phone_number))
  {
    std::cout <<  "phone number is not valide . Enter phone number : ";
    if (!getline(std::cin, phone_number))
    {
      std::cout <<  "\033[1;36m" << "EOF detected. Exiting..." << std::endl;
      exit(0);
    }
  }
  std::cout << "Enter the darkest secret : ";
  if (!getline(std::cin, darkest_secret))
  {
    std::cout <<  "\033[1;36m" <<"EOF detected. Exiting..." << std::endl;
    exit(0);
  }
  while (darkest_secret.empty())
  {
    std::cout <<  "the darkest secret can not be empty . Enter enter the darkest secret : ";
    if (!getline(std::cin, darkest_secret))
    {
      std::cout <<  "\033[1;36m" << "EOF detected. Exiting..." << std::endl;
      exit(0);
    }
  }
  std::cout << "Contact added successfully!" << std::endl;
}

void  Phonebook::add_contact()
{
  array_contact[index].set_contact_info();
  index = (index + 1) % MAX_SIZE;
  if (counter < MAX_SIZE)
    counter++;
}

long ft_atoi(std::string str)
{
  int i;
  long  res;

  i = 0;
  res = 0;
  while (str[i])
  {
    res = res * 10 + (str[i] - '0');
    if (res > INT_MAX || res < INT_MIN)
    {
      std::cout << "argument is not valid, Please enter a valid number" << std::endl;
      std::cout << "--------------------------" << std::endl;
      return(-1);
    }
    i++;
  }
  return(res);
}

int string_validation(std::string str)
{
  int i = 0;
  if (str[i] == '+')
    i++;
  while(str[i])
  {
    if (str[i] < '0' || str[i] > '9')
    {
      std::cout << "argument is not valid, Please enter a valid number" << std::endl;
      std::cout << "--------------------------" << std::endl;
      return(1);
    }
    i++;
  }
  return(0);
}


void  Phonebook::specifier_index(int id)
{
  int i;

  i = 0;
  while (i < counter)
  {
    if (i == id)
    {
      array_contact[i].display_contact(i);
      break;
    }
    i++;
  }
  if (i == counter)
    std::cout << "this index " << id << " not found !" << std::endl;
}

void  Phonebook::search_book()
{
  int i;
  if (counter == 0)
  {
    std::cout << "Phonebook is empty" << std::endl;
    return;
  }

  display_header_row();
  for (i = 0; i < counter; i++)
  {
    array_contact[i].display_users_info(i);
  }
  if (i == counter)
  {
    display_user_id();
  }
}

void  make_conversation()
{

  std::string  command;
  while (true)
  {
    std::cout << "Enter command (ADD, SEARCH, EXIT) : ";
    getline(std::cin, command);
    if (command == "ADD")
    {
      s1.add_contact();
    }
    else if (command == "SEARCH")
    {
      s1.search_book();
    }
    else if (command == "EXIT")
    {
      std::cout << "Goodbye! Contacts will be lost forever!" << std::endl;
      exit(127);
    }
    else if (!command.empty())
    {
      std::cout << "Invalid command! Please use ADD, SEARCH, or EXIT." << std::endl;
      continue;
    }
    else if (std::cin.eof())
    {
      std::cout << "\nEOF detected. Exiting..." << std::endl;
      exit(127);
    }
  }
}

int main ()
{
  make_conversation();
  return 0;
}
