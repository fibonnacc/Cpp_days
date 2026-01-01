/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 09:38:56 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/25 09:38:56 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


std::ostream& operator<<(std::ostream& out, const Form& thing) {
  out << thing.getFormName() << " : "
  << "\n Sign "  << (thing.getSign() ? "Yes" : "No")
  << "\n Grade to sign " << thing.getGradeSign()
  << "\n Grade to exec " << thing.getGradeExec();
  return (out);
}

/* ****************************** */
/*           _Exception           */
/* ****************************** */
const char* Form::GradeTooLowException::what() const throw() {
  return ("Form grade is too low");
}

const char* Form::GradeTooHighException::what() const throw() {
  return ("Form grade is too high");
}

/* ****************************** */
/*             Getters            */
/* ****************************** */
int Form::getGradeSign() const {
  return (_gradeToSign);
}

int Form::getGradeExec() const {
  return (_gradeToExec);
}

std::string Form::getFormName() const {
  return (_name);
}

bool  Form::getSign() const {
  return (_sign);
}

/* ****************************** */
/*          Other_Methode         */
/* ****************************** */
void Form::beSigned(const Bureaucrat& thing) {
  std::cout << "Bureaucrat Grade : " << thing.getGrade() << std::endl;
  std::cout << "AForm Grade : " << this->getGradeSign() << std::endl;
  if (thing.getGrade() > this->getGradeSign()) {
    GradeTooLowException other;
    throw other;
  }
  _sign = true;
}


/* ****************************** */
/*   Canonical Orthodox Form      */
/* ****************************** */
Form::Form() : _name("Anonyme") ,_sign(false) ,_gradeToSign(0) ,_gradeToExec(0) {
}

Form::Form(std::string name, int SignGrade, int ExecGrade) : _name(name), _gradeToSign(SignGrade), _gradeToExec(ExecGrade) {
  this->_sign = false;
  if (SignGrade < 1 || ExecGrade < 1) {
    GradeTooHighException thing;
    throw thing;
  }

  else if (SignGrade > 150 || ExecGrade > 150) {
    GradeTooLowException thing;
    throw thing;
  }
}

Form::Form(const Form &other) : _name(other._name) ,_gradeToSign(other._gradeToSign) ,_gradeToExec(other._gradeToExec) {
  this->_sign = other._sign;
}

Form &Form::operator=(const Form &other) {
  if (this != &other) {
    this->_sign = other._sign;
  }
  return *this;
}

Form::~Form() {
  std::cout << "Form is destroyed" << std::endl;
}
