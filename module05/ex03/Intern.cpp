#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/* ****************************** */
/*          Other_Methode         */
/* ****************************** */
AForm *Intern::makeForm(const std::string &FormName, const std::string &FormTraget) {
  std::string Str[3] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};

  int i;
  for (i = 0; i < 3; i++) {
    if (Str[i] == FormName) {
      break;
    }
  }

  switch (i) {
    case 0:
      return (makePresidential(FormTraget));
    case 1:
      return (makeRobotomy(FormTraget));
    case 2:
      return (makeShrubbery(FormTraget));
    default:
      throw NotFound();
  }
}

const char* Intern::NotFound::what() const throw() {
  return ("*Not Found!*");
}

AForm *Intern::makePresidential(const std::string &target) {
  PresidentialPardonForm *thing = new PresidentialPardonForm(target);
  return thing;
}

AForm *Intern::makeRobotomy(const std::string &target) {
  RobotomyRequestForm *thing = new RobotomyRequestForm(target);
  return thing;
}

AForm *Intern::makeShrubbery(const std::string &target) {
  ShrubberyCreationForm *thing =  new ShrubberyCreationForm(target);
  return thing;
}


/* ****************************** */
/*   Canonical Orthodox Form      */
/* ****************************** */
Intern::Intern() {
}

Intern::Intern(const Intern &other) {
  (void)other;
}

Intern &Intern::operator=(const Intern &other) {
  (void)other;
  return *this;
}

Intern::~Intern() {
}
