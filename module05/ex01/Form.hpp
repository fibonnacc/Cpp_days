/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 11:15:49 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/24 11:15:49 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FORM_H

#define  FORM_H

#include <iostream>

class Bureaucrat;

class Form {
public:
  /* ****************************** */
  /*             Getters            */
  /* ****************************** */
  int getGradeSign() const;
  int getGradeExec() const;
  std::string getFormName() const;
  bool  getSign() const;

  /* ****************************** */
  /*          Other_Methode         */
  /* ****************************** */
  void  beSigned(const Bureaucrat& thing);

  /* ****************************** */
  /*           _Exception           */
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
  Form();
  Form(std::string _name, int SignGrade, int ExecGrade);
  Form(const Form &other);
  Form &operator=(const Form &other);
  ~Form();

private:
  const std::string _name;
  bool  _sign;
  const int _gradeToSign;
  const int _gradeToExec;
};

std::ostream& operator<<(std::ostream& out, const Form& thing);

#endif
