
#ifndef PHONEBOOK_HPP
#define  PHONEBOOK_HPP

#define MAX_SIZE 8

#include <iostream>
using   namespace std;

class contacte
{
  private:
    string  first_name;
    string  last_name;
    string  nickname;
    string  phone_number;
  bool  phone_number_validation(string  &number);

  public:
    void  set_contact_info();
    string  get_first_name();
    string  get_last_name();
    void  display_contact();
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
    void  display_contacts();
};

#endif // !PHONEBOOK
