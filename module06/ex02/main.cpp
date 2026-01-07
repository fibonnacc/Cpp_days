/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:38:39 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/07 20:38:39 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int main () {
  srand(time(0));
  std::cout << "\nusing pointer" << std::endl; 

  Base *data = generate();
  identify(data);

  std::cout << "\nusing reference" << std::endl;

  A obj1;
  Base &ref1 = obj1;
  B obj2;
  Base &ref2 = obj2;
  C obj3;
  Base &ref3 = obj3;

  identify(ref1);
  identify(ref2);
  identify(ref3);
  delete data;
  return 0;
}
