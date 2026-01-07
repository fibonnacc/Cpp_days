/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:38:31 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/07 20:38:31 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE
#define BASE

#include <iostream>
#include <cstdlib>

class Base {
public:
  Base();
  Base(const Base &);
  Base &operator=(const Base &);
  virtual ~Base();

private:
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);


#endif
