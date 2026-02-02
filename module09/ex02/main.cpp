/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:43:27 by helfatih          #+#    #+#             */
/*   Updated: 2026/02/02 18:17:53 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char *av[]) {

  PmergeMe obj;
  try {
    if (ac == 1) {
      std::runtime_error("Expect more than one argument");
    }
    obj.parseArgument(ac, av);
  }
  catch (const std::exception& e) {
    std::cout << "Error : " << e.what() << std::endl;
  }
  return 0;
}
