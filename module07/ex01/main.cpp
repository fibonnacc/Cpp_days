/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:45:45 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/19 10:25:08 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


int main () {
  const char arr[] = {'a', 'b', 'c'};
  iter(arr, 3, print);

  std::cout << "\n*********************\n" << std::endl;

  char arr1[] = {'1', '2', '3'};
  iter(arr1, 3, Increment);
  (void)arr;
  (void)arr1;
  return 0;
}
