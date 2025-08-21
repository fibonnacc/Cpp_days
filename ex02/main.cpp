#include "phonebook.hpp"

using namespace std;

bool  contacte::phone_number_validation(string &number)
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
  cout << "Enter first name : ";
  if (!getline(cin, first_name))
  {
    cout <<  "\033[1;36m" << "EOF detected. Exiting..." << endl;
    exit(0);
  }
  while (first_name.empty())
  {
    cout <<  "First name cannot be empty. Enter first name: ";
    if (!getline(cin, first_name))
    {
      cout <<  "\033[1;36m" << "EOF detected. Exiting..." << endl;
      exit(0);
    }
  }

  cout << "Enter last name : ";
  if (!getline(cin, last_name))
  {
    cout <<  "\033[1;36m" << "EOF detected. Exiting..." << endl;
    exit(0);
  }
  while (last_name.empty())
  {
    cout <<  "last name cannot be empty. Enter last name: ";
    if (!getline(cin, last_name))
    {
      cout <<  "\033[1;36m" << "EOF detected. Exiting..." << endl;
      exit(0);
    }
  }

  cout << "Enter the nickname : ";
  if (!getline(cin, nickname))
  {
    cout <<  "\033[1;36m" <<"EOF detected. Exiting..." << endl;
    exit(0);
  }
  while (nickname.empty())
  {
    cout <<  "nickname cannot be empty. Enter nickname : ";
    if (!getline(cin, nickname))
    {
      cout <<  "\033[1;36m" << "EOF detected. Exiting..." << endl;
      exit(0);
    }
  }

  cout << "Enter the phone number : ";
  if (!getline(cin, phone_number))
  {
    cout <<  "\033[1;36m" <<"EOF detected. Exiting..." << endl;
    exit(0);
  }
  while (phone_number.empty() || !phone_number_validation(phone_number))
  {
    cout <<  "phone number is not valide . Enter phone number : ";
    if (!getline(cin, phone_number))
    {
      cout <<  "\033[1;36m" << "EOF detected. Exiting..." << endl;
      exit(0);
    }
  }
  cout << "Contact added successfully!" << endl;
}

void  Phonebook::add_contact()
{
  array_contact[index].set_contact_info();
  index = (index + 1) % MAX_SIZE; 
  counter++;
}

void contacte::display_contact()
{
    // cout << "\033[2J\033[H"; // Clear screen
    cout << "\033[1;36m" << "╔═════════════════════════════════════╗" << "\033[0m" << endl;
    cout << "\033[1;36m" << "║            CONTACT DETAILS           ║" << "\033[0m" << endl;
    cout << "\033[1;36m" << "╠═════════════════════════════════════╣" << "\033[0m" << endl;
    cout << "\033[1;33m" << "║ First name  : " << "\033[1;37m"  << first_name << "\033[1;39m" << endl;
    cout << "\033[1;33m" << "║ Last name   : " << "\033[1;37m"  << last_name  << "\033[1;39m" << endl;
    cout << "\033[1;33m" << "║ Nickname    : " << "\033[1;37m"  << nickname   << "\033[1;39m"  << endl;
    cout << "\033[1;33m" << "║ Phone number: " << "\033[1;37m"  << phone_number << "\033[1;39m" << endl;
    cout << "\033[1;36m" << "╚═════════════════════════════════════╝" << "\033[0m" << "\033[1;39m" << endl;
    cout << endl;
}

void  Phonebook::search_book()
{
  if (counter == 0)
  {
    cout << "Phonebook is empty" << endl;
    return;
  }
  cout << index << endl;
  for (int i = 0; i < counter; i++)
  {
    cout << "Contact " << i << ":" << endl;
    array_contact[i].display_contact();
    cout << "-------------------" << endl;
  }
}

void  make_conversation()
{

  Phonebook s1;
  string  command;
  while (true)
  {
    cout << "Enter command : ";
    getline(cin, command);
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
      cout << "Goodbye! Contacts will be lost forever!" << endl;
      exit(127);
    }
    else if (!command.empty())
    {
      cout << "Invalid command! Please use ADD, SEARCH, or EXIT." << endl;
      break;
    }
    else if (cin.eof())
    {
      cout << "\nEOF detected. Exiting..." << endl;
      exit(127);
    }
  }
}

int main ()
{
  make_conversation();
  return 0;
}
