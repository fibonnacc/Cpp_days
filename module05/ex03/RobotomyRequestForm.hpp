/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:39:46 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/27 11:39:46 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM

#define ROBOTOMYREQUESTFORM

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
#include <unistd.h>

class RobotomyRequestForm : public AForm {
public:

  /* ****************************** */
  /*   Canonical Orthodox Form      */
  /* ****************************** */
  RobotomyRequestForm();
  RobotomyRequestForm(std::string str);
  RobotomyRequestForm(const RobotomyRequestForm &other);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
  ~RobotomyRequestForm();

  /* ****************************** */
  /*          Other_Methode         */
  /* ****************************** */
  void  execute(Bureaucrat const & executor) const;

private:
  std::string _target;
};


#endif 
