/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:04:30 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/05 13:04:30 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main (int ac, char **av) {
  if (ac != 2) {
    std::cout << "Usage: ./convert <literal>" << std::endl;
    return (1);
  }
  std::string str(av[1]);
  ScalarConverter::convert(str);
  return 0;
}
