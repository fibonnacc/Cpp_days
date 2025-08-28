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
  counter++;
}

void contacte::display_contact(int id)
{
  std::cout << "\033[1;36m" << "╔═════════════════════════════════════╗" << "\033[0m" << std::endl;
  std::cout << "\033[1;36m" << "║            CONTACT DETAILS          ║" << "\033[0m" << std::endl;
  std::cout << "\033[1;36m" << "╠═════════════════════════════════════╣" << "\033[0m" << std::endl;
  std::cout << "\033[1;33m" << "║ index  : " << "\033[1;37m"  << id << "\033[1;39m" << std::endl;
  std::cout << "\033[1;33m" << "║ First name  : " << "\033[1;37m"  << first_name << "\033[1;39m" << std::endl;
  std::cout << "\033[1;33m" << "║ Last name   : " << "\033[1;37m"  << last_name  << "\033[1;39m" << std::endl;
  std::cout << "\033[1;33m" << "║ Nickname    : " << "\033[1;37m"  << nickname   << "\033[1;39m"  << std::endl;
  std::cout << "\033[1;33m" << "║ Phone number: " << "\033[1;37m"  << phone_number << "\033[1;39m" << std::endl;
  std::cout << "\033[1;33m" << "║ Darkest_secret: " << "\033[1;37m"  << darkest_secret << "\033[1;39m" << std::endl;
  std::cout << "\033[1;36m" << "╚═════════════════════════════════════╝" << "\033[0m" << "\033[1;39m" << std::endl;
  std::cout << std::endl;
}

void contacte::display_users_info(int i)
{
  std::string str = std::to_string(i);
  std::cout << str.substr(0, 10) << " | ";
  if (first_name.size() >= 10)
  {
    std::cout << first_name.substr(0, 9) << "." << " | ";
  }
  else
    std::cout << first_name.substr(0, 10) << " | ";
  if (last_name.size() >= 10)
    std::cout << last_name.substr(0, 9) << "." << " | ";
  else
    std::cout << last_name.substr(0, 10) << " | ";
  if (nickname.size() >= 10)
    std::cout << nickname.substr(0, 9) << "." << " | ";
  else
    std::cout << nickname.substr(0, 10);
  std::cout << std::endl;
}

int ft_atoi(std::string str)
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

void  display_user_id()
{
  int id;
  std::string convert;

  std::cout << "Enter the number of index : ";
  if (!getline(std::cin, convert))
  {
      std::cout <<  "\033[1;36m" << "EOF detected. Exiting..." << std::endl;
      exit(0);
  }
  if (string_validation(convert))
    display_user_id();
  id = ft_atoi(convert);
  if (id == -1)
    display_user_id();
  s1.specifier_index(id);
}



void  Phonebook::search_book()
{
  int i;
  if (counter == 0)
  {
    std::cout << "Phonebook is empty" << std::endl;
    return;
  }
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
