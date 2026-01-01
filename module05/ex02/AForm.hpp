/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm {
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
  class FormNotSignedException : public std::exception {
  public:
    const char* what() const throw();
  };
  void  beSigned(const Bureaucrat& thing);
  virtual void  execute(const Bureaucrat& executor) const = 0;

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
  /*   Canonical Orthodox AForm      */
  /* ****************************** */
  AForm();
  AForm(std::string _name, int SignGrade, int ExecGrade);
  AForm(const AForm &other);
  AForm &operator=(const AForm &other);
  ~AForm();

private:
  const std::string _name;
  bool  _sign;
  const int _gradeToSign;
  const int _gradeToExec;
};

std::ostream& operator<<(std::ostream& out, const AForm& thing);

#endif
