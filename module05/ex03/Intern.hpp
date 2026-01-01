

#ifndef INTERN
#define INTERN



#include <iostream>

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;
class AForm;

class Intern {
public:

  /* ****************************** */
  /*          Other_Methode         */
  /* ****************************** */
  AForm *makeForm(const std::string &FormName, const std::string &FormTraget);
  AForm *makePresidential(const std::string &target);
  AForm *makeRobotomy(const std::string &target);
  AForm *makeShrubbery(const std::string &target);

  class NotFound : public std::exception {
  public:
    const char* what() const throw();
  };
  /* ****************************** */
  /*   Canonical Orthodox Form      */
  /* ****************************** */
  Intern();
  Intern(const Intern &other);
  Intern &operator=(const Intern &other);
  ~Intern();

private:
};

#endif
