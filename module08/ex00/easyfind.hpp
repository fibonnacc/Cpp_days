/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 21:42:54 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/19 21:42:54 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND

#define EASYFIND


#include <iostream>
#include <vector>
#include <cstdlib>
#include <stdio.h>


template <typename T>
void easyfind(T &container, int value) {
  typename T::iterator it_begin = container.begin();
  typename T::iterator it_end = container.end();

  while (it_begin != it_end) {
    if (*it_begin == value) {
      std::cout << "Match found: Value *" << value << "* is present in the container." << std::endl;
      break;
    }
    it_begin++;
  }
  if (it_begin == it_end)
    throw std::runtime_error("Not found");
}

#endif
