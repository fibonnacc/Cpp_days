/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:43:33 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/27 17:14:55 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM

#define SHRUBBERYCREATIONFORM

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
public:

  /* ****************************** */
  /*   Canonical Orthodox Form      */
  /* ****************************** */
  ShrubberyCreationForm();
  ShrubberyCreationForm(std::string str);
  ShrubberyCreationForm(const ShrubberyCreationForm &other);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
  ~ShrubberyCreationForm();

  /* ****************************** */
  /*          Other_Methode         */
  /* ****************************** */
  void  execute(Bureaucrat const & executor) const;

private:
  std::string _target;
};

#endif
