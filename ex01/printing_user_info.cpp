#include "phonebook.hpp"

void contacte::display_contact(int id)
{
    std::cout << "\033[1;34m" << "║-> index         : " << "\033[1;91m"  << id << "\033[0m" << std::endl;
    std::cout << "\033[1;34m" << "║-> First name    : " << "\033[1;92m"  << first_name << "\033[0m" << std::endl;
    std::cout << "\033[1;34m" << "║-> Last name     : " << "\033[1;93m"  << last_name << "\033[0m" << std::endl;
    std::cout << "\033[1;34m" << "║-> Nickname      : " << "\033[1;95m"  << nickname << "\033[0m" << std::endl;
    std::cout << "\033[1;34m" << "║-> Phone number  : " << "\033[1;96m"  << phone_number << "\033[0m" << std::endl;
    std::cout << "\033[1;34m" << "║-> Darkest secret: " << "\033[1;97m"  << darkest_secret << "\033[0m" << std::endl;
}

void display_header_row()
{
    std::cout << "\033[1;36m" << std::setw(10) << "index"     << "\033[1;37m" << "|";  // Cyan
    std::cout << "\033[1;32m" << std::setw(10) << "firstname" << "\033[1;37m" << "|";  // Green  
    std::cout << "\033[1;33m" << std::setw(10) << "lastname"  << "\033[1;37m" << "|";  // Yellow
    std::cout << "\033[1;35m" << std::setw(10) << "nickname"  << "\033[1;37m" << "|";  // Magenta
    std::cout << "\033[0m" << std::endl;
}

void contacte::display_users_info(int i)
{
  std::string str = std::to_string(i);
  std::cout << std::setw(10) << str << "|";
  if (first_name.size() >= 10)
    std::cout << std::setw(9) << first_name << "." << "|";
  else
    std::cout << std::setw(10) << first_name << "|";
  if (last_name.size() >= 10)
    std::cout << std::setw(9) << last_name << "." << "|";
  else
    std::cout << std::setw(10) << last_name << "|";
  if (nickname.size() >= 10)
    std::cout << std::setw(9) << nickname << "." << "|";
  else
    std::cout << std::setw(10) << nickname << "|";
  std::cout << std::endl;
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
