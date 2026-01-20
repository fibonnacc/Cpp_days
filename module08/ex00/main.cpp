/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 21:20:29 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/19 21:20:29 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main () {
  srand(time(NULL));
  try {
    std::vector<int>::iterator it_begin;
    std::vector<int>::iterator it_end;

    std::vector<int> ve;

    int random_value;
    ve.push_back(10);
    ve.push_back(20);
    ve.push_back(30);
    ve.push_back(40);
    ve.push_back(50);

    it_end = ve.end();

    std::cout << "\n************ THE VALUES : *************\n" << std::endl;

    std::cout << "[the value is : ";
    for (it_begin = ve.begin(); it_begin != it_end; it_begin++) {
      std::cout << *it_begin;
      if (it_begin + 1 != it_end) {
        std::cout << ", ";
      }
    }
    std::cout << "]" << std::endl;

    std::cout << "\n******* LET'S TEST EASYFIND() *********\n" << std::endl;
    std::cout << "Enter a value : ";
    std::cin >> random_value;
    if (std::cin.fail()) {
      std::cin.clear();
      std::cout << "*That's not a valid integer!*" << std::endl;
      return (1);
    }
    easyfind(ve, random_value);
  }
  catch (const std::exception& e) {
    std::cout << "*Caught exception : " << e.what() << "*" << std::endl;
  }
  return 0;
}
