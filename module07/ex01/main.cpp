/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:45:45 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/21 18:08:19 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main () {
  char arr[] = {'a', 'b', 'c'};
  iter(arr, 3, print<const char>);

  std::cout << "\n*********************\n" << std::endl;

  char arr1[] = {'1', '2', '3'};
  iter(arr1, 3, print<char>);
  (void)arr;
  (void)arr1;
  return 0;
}
