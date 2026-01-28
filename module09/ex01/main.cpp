/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:48:23 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/27 18:48:23 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char *argv[]) {
  try {
    RPN calculator;
    if (argc != 2) {
      throw std::runtime_error("Expect two argument!");
    }
    calculator.MakeToken(argv[1]);
    calculator.reversePolishNotation();
  }
  catch (const std::exception& e) {
    std::cout << "Error : " << e.what() << std::endl;
  }
  return 0;
}
