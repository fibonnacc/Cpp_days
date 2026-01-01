/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 14:11:21 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/27 14:11:21 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"


/* ****************************** */
/*          Other_Methode         */
/* ****************************** */
void  RobotomyRequestForm::execute(Bureaucrat const & executor) const {
  executor.executeForm(*this);

  std::cout << "*BZZZZZZZZT!*" << std::endl;
  sleep(1);
  std::cout << "*BZZZZZZZZT!*" << std::endl;
  sleep(1);
  std::cout << "*BZZZZZZZZT!*" << std::endl;

  int random = rand() % 100 + 1;
  if (random <= 50) {
    std::cout << this->_target << " has been robotomized!" << std::endl;
  }
  else
    std::cout << this->_target << " was not robotomized!" << std::endl;
}


/* ****************************** */
/*   Canonical Orthodox Form      */
/* ****************************** */
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other) {
  this->_target = other._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  this->_target = other._target;
  return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string str) : AForm("Robotomy Request", 72, 45), _target(str) {
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45) {
  _target = "Inkonnu";
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

