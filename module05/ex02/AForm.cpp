/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 09:38:56 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/25 09:38:56 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"


std::ostream& operator<<(std::ostream& out, const AForm& thing) {
  out << thing.getFormName() << " : "
  << "\n Sign "  << (thing.getSign() ? "Yes" : "No")
  << "\n Grade to sign " << thing.getGradeSign()
  << "\n Grade to exec " << thing.getGradeExec();
  return (out);
}

/* ****************************** */
/*           _Exception           */
/* ****************************** */
const char* AForm::GradeTooLowException::what() const throw() {
  return ("AForm grade is too low");
}

const char* AForm::GradeTooHighException::what() const throw() {
  return ("AForm grade is too high");
}

/* ****************************** */
/*             Getters            */
/* ****************************** */
int AForm::getGradeSign() const {
  return (_gradeToSign);
}

int AForm::getGradeExec() const {
  return (_gradeToExec);
}

std::string AForm::getFormName() const {
  return (_name);
}

bool  AForm::getSign() const {
  return (_sign);
}

/* ****************************** */
/*          Other_Methode         */
/* ****************************** */
const char* AForm::FormNotSignedException::what() const throw() {
  return ("the form can not be executed because it has not be signed yet!");
}

void AForm::beSigned(const Bureaucrat& thing) {

  if (thing.getGrade() > this->getGradeSign()) {
    GradeTooLowException other;
    throw other;
  }
  _sign = true;
}


/* ****************************** */
/*   Canonical Orthodox AForm      */
/* ****************************** */
AForm::AForm() : _name("Anonyme") ,_sign(false) ,_gradeToSign(0) ,_gradeToExec(0) {
}

AForm::AForm(std::string name, int SignGrade, int ExecGrade) : _name(name), _gradeToSign(SignGrade), _gradeToExec(ExecGrade) {
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

AForm::AForm(const AForm &other) : _name(other._name) ,_gradeToSign(other._gradeToSign) ,_gradeToExec(other._gradeToExec) {
  this->_sign = other._sign;
}

AForm &AForm::operator=(const AForm &other) {
  if (this != &other) {
    this->_sign = other._sign;
  }
  return *this;
}

AForm::~AForm() {
  std::cout << "AForm is destroyed" << std::endl;
}
