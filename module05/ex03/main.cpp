/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 20:25:18 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/30 20:48:36 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main () {

  std::cout << "/* ******************************** */" << std::endl;
  std::cout << "/*     ShrubberyCreationForm        */" << std::endl;
  std::cout << "/* ******************************** */" << std::endl;
  try {
    Intern First_intern;

    Bureaucrat employer("Hicham", 140);
    AForm *form = First_intern.makeForm("Robotomy Request", "Zakaria");
    // form->beSigned(employer);
    // form->execute(employer);
    employer.signForm(*form);
    // std::cout << *form << std::endl;
    std::cout << "Success execution !" << std::endl;
  }

  catch (const std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  // std::cout << "/* ****************************** */" << std::endl;
  // std::cout << "/*     RobotomyRequestForm        */" << std::endl;
  // std::cout << "/* ****************************** */" << std::endl;
  // try {
  //   Intern Second_intern;
  //
  //   AForm *form = Second_intern.makeForm("Robotomy Request", "Lme3lem");
  //   (void)form;
  //   std::cout << "Success execution !" << std::endl;
  // }
  // catch (const std::exception& e) {
  //   std::cout << "Error: " << e.what() << std::endl;
  // }
  //
  // std::cout << "/* ****************************** */" << std::endl;
  // std::cout << "/*     PresidentialPardonForm     */" << std::endl;
  // std::cout << "/* ****************************** */" << std::endl;
  // try {
  //   Intern third;
  //
  //   AForm *form = third.makeForm("Presidential Pardon", "AbdRahim");
  //   (void)form;
  //   std::cout << "Success execution !" << std::endl;
  // }
  // catch (const std::exception& e) {
  //   std::cout << "Error: " << e.what() << std::endl;
  // }

}
