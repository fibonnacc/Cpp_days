/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:34:59 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/30 12:49:54 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


/* ****************************** */
/*   Canonical Orthodox Form      */
/* ****************************** */

std::ostream& operator<<(std::ostream& out, const Bureaucrat& thing) {
  out << thing.getName() << ", bureaucrat grade " << thing.getGrade() << ".";
  return out;
}

Bureaucrat::Bureaucrat() : name("Inkonnu"){
  this->grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  if (this != &other)
  {
    this->grade = other.getGrade();
  }
  return *this;
}


Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name) {
  if (_grade < 1) {
    Bureaucrat::GradeTooHighException thing;
    throw thing;
  }
  else if (_grade > 150) {
    Bureaucrat::GradeTooLowException thing;
    throw thing;
  }
  this->grade = _grade;
}

Bureaucrat::~Bureaucrat() {
  std::cout << "Destructor say Goodbye" << std::endl;
}

/* ****************************** */
/*          Other_Methode         */
/* ****************************** */
void  Bureaucrat::signForm(AForm& thing) {
  try {
    thing.beSigned(*this);
    std::cout << name << " signed " << thing.getFormName() << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << name << " couldn't sign " << thing.getFormName() << " because " << e.what() << std::endl;
  }
}

void  Bureaucrat::executeForm(AForm const & form) const {
  if (form.getSign() == false) {
    throw AForm::FormNotSignedException();
  }

  else if (getGrade() > form.getGradeExec()) {
    throw AForm::GradeTooLowException();
  }
  std::cout << this->name << " executed " << form.getFormName() << std::endl;
}

/* ****************************** */
/*        Throw Exception         */
/* ****************************** */
const char* Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Bureaucrat grade is too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Bureaucrat grade is too high");
}
/* ****************************** */
/*             Getters            */
/* ****************************** */
const std::string Bureaucrat::getName() const {
  return (this->name);
}

int Bureaucrat::getGrade() const {
  return (this->grade);
}

/* ****************************** */
/*    Increment and Decrement     */
/* ****************************** */
void  Bureaucrat::increment() {
  this->grade--;
  if (grade < 1) {
    Bureaucrat::GradeTooHighException thing;
    throw thing;
  }
  else if (grade > 150) {
    Bureaucrat::GradeTooLowException thing;
    throw thing;
  }
}

void  Bureaucrat::decrement() {
  this->grade++;
  if (grade < 1) {
    Bureaucrat::GradeTooHighException thing;
    throw thing;
  }
  else if (grade > 150) {
    Bureaucrat::GradeTooLowException thing;
    throw thing;
  }
}
