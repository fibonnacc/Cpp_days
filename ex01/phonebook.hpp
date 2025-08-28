
#ifndef PHONEBOOK_HPP
#define  PHONEBOOK_HPP

#define MAX_SIZE 8

#include <iostream>
#include <limits.h>

class contacte
{
  private:
    std::string  first_name;
    std::string  last_name;
    std::string  nickname;
    std::string  darkest_secret;
    std::string  phone_number;
  bool  phone_number_validation(std::string  &number);

  public:
    void  set_contact_info();
    std::string  get_first_name();
    std::string  get_last_name();
    void  display_contact(int id);
    void  display_users_info(int i);
};

class Phonebook
{
  private:
    contacte  array_contact[MAX_SIZE];
    int counter;
    int index;
  public:
    Phonebook() {
        counter = 0;
        index = 0;
    }
    void  add_contact();
    void  search_book();
    void  specifier_index(int id);
};

#endif // !PHONEBOOK
