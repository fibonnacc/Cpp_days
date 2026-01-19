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
    for (size_t i = 0; i < 10; i++) {
      random_value = rand() % 10 + 1;
      ve.push_back(random_value);
    }

    it_end = ve.end();

    std::cout << "\n************ THE VALUES : *************\n" << std::endl;
    for (it_begin = ve.begin(); it_begin != it_end; it_begin++) {
      std::cout << "the value is : " << *it_begin << std::endl;
    }
    std::cout << "\n******* LET'S TEST EASYFIND() *********\n" << std::endl;

    for (it_begin = ve.begin(); it_begin != it_end; it_begin++) {
      random_value = rand() % 10 + 1;
      easyfind(ve, random_value);
    }
  }
  catch (const std::exception& e) {
    std::cout << "Error" << e.what() << std::endl;
  }
  return 0;
}
