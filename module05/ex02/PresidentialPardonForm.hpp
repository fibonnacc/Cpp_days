/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:35:42 by helfatih          #+#    #+#             */
/*   Updated: 2025/12/27 11:35:42 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM

#define PRESIDENTIALPARDONFORM

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
public:

  /* ****************************** */
  /*   Canonical Orthodox Form      */
  /* ****************************** */
  PresidentialPardonForm();
  PresidentialPardonForm(std::string str);
  PresidentialPardonForm(const PresidentialPardonForm &other);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
  ~PresidentialPardonForm();

  /* ****************************** */
  /*          Other_Methode         */
  /* ****************************** */
  void  execute(Bureaucrat const & executor) const;

private:
  std::string _target;
};


#endif
