/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:38:29 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/09 18:48:02 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
  int random = rand() % 3;

  switch (random) {
    case 0:
      std::cout << "*.Generated : A.*" << std::endl;
      return new A();
    case 1:
      std::cout << "*.Generated : B.*" << std::endl;
      return new B();
    default:
      std::cout << "*.Generated : C.*" << std::endl;
      return new C();
  }
}

void identify(Base* p) {
  if (dynamic_cast<A*>(p)) {
    std::cout << "*.Type : A.*" << std::endl;
  }
  else if (dynamic_cast<B*>(p)) {
    std::cout << "*.Type : B.*" << std::endl;
  }
  else if (dynamic_cast<C*>(p)) {
    std::cout << "*.Type : C.*" << std::endl;
  }
}

void identify(Base& p) {
  try {
    (void)dynamic_cast<A&>(p);
    std::cout << "*.Type : A.*" << std::endl;
    return;
  }
  catch (std::exception& e) {}
  try {
    (void)dynamic_cast<B&>(p);
    std::cout << "*.Type : B.*" << std::endl;
    return ;
  }
  catch (std::exception& e) {}
  try {
    (void)dynamic_cast<C&>(p);
    std::cout << "*.Type : C.*" << std::endl;
    return ;
  }
  catch (std::exception& e) {}
}

Base::Base() {
}

Base::Base(const Base &other) {
  (void)other;
}

Base &Base::operator=(const Base &other) {
  (void)other;
  return *this;
}

Base::~Base() {
}

