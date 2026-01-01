/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:35:20 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/22 14:35:20 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Bureaucrat {
public:
  /* ****************************** */
  /*             Getters            */
  /* ****************************** */
  const std::string getName() const ;
  int getGrade() const ;


  /* ****************************** */
  /*          Other_Methode         */
  /* ****************************** */
  void  signForm(AForm& thing);
  void  executeForm(AForm const & form) const;

  /* ****************************** */
  /*    Increment and Decrement     */
  /* ****************************** */
  void  increment();
  void  decrement();

  /* ****************************** */
  /*           Grading              */
  /* ****************************** */
  class GradeTooHighException : public std::exception {
  public:
    const char* what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    const char* what() const throw();
  };

  /* ****************************** */
  /*   Canonical Orthodox Form      */
  /* ****************************** */
  Bureaucrat();
  Bureaucrat(std::string _name, int grade);
  Bureaucrat(const Bureaucrat &other);
  Bureaucrat &operator=(const Bureaucrat &other);
  ~Bureaucrat();

private:
  /* ****************************** */
  /*         Attribute              */
  /* ****************************** */
  const std::string name;
  int grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& thing);

#endif

