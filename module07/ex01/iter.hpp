/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:35:30 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/26 17:26:47 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER

#define ITER

#include <iostream>

template <typename T>
void print_(T& arr_) {
  std::cout << "the value : " << arr_ << std::endl;
}

template <typename T>
void Increment(T& arr_) {
  std::cout << "the value : " << (char)(arr_ + 1) << std::endl;
}

template <typename T, typename F>
void  iter(T* address, const size_t length, F func) {
  if (!address) {
    return;
  }
  for (size_t i = 0; i < length; i++) {
    func(address[i]);
  }
}

#endif
