/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 20:25:18 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/27 20:25:18 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main () {

  /* ****************************** */
  /*     ShrubberyCreationForm      */
  /* ****************************** */
  std::cout << "/* ******************************** */" << std::endl;
  std::cout << "/*     ShrubberyCreationForm        */" << std::endl;
  std::cout << "/* ******************************** */" << std::endl;
  try {
    Bureaucrat obj("Hicham", 100);
    std::string name("Khalid");
    ShrubberyCreationForm thing(name);

    thing.beSigned(obj);

    thing.execute(obj);

    std::cout << "Success execution ! check for the file " << name + "_shrubbery" << std::endl;
  }

  catch (const std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  /* ****************************** */
  /*     RobotomyRequestForm        */
  /* ****************************** */
  std::cout << "/* ****************************** */" << std::endl;
  std::cout << "/*     RobotomyRequestForm        */" << std::endl;
  std::cout << "/* ****************************** */" << std::endl;
  try {
    Bureaucrat obj("Zakaria", 20);
    std::string name("AbdRahim");
    RobotomyRequestForm thing(name);

    thing.beSigned(obj);
    
    thing.execute(obj);
    
    std::cout << "Success execution ! check for the file " << name + "_Robbot" << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  /* ****************************** */
  /*     PresidentialPardonForm     */
  /* ****************************** */
  std::cout << "/* ****************************** */" << std::endl;
  std::cout << "/*     PresidentialPardonForm     */" << std::endl;
  std::cout << "/* ****************************** */" << std::endl;
  try {
    Bureaucrat obj("Yahya", 4);
    std::string name("Pipe");
    PresidentialPardonForm thing(name);

    thing.beSigned(obj);

    thing.execute(obj);

    std::cout << "Success execution ! check for the file " << name + "_President" << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

}
