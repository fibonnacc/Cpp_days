/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:35:30 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/14 17:53:13 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER

#define ITER

template <typename T>
void print(T& arr_) {
  std::cout << "the value : " << arr_ << std::endl;
}

template <typename T>
void Increment(T& arr_) {
  std::cout << "the value : " << (char)(arr_ + 1) << std::endl;
}


template <typename T>
void  iter(T* address, size_t length, void (*func)(T&)) {
  for (size_t i = 0; i < length; i++) {
    func(address[i]);
  }
}

#endif
