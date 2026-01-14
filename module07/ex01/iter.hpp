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

void UperCase(T& arr_) {
  std::cout << "the char : " << (char)(std::toupper(arr_)) << std::endl;
}

template <typename T>

void  iter(T* address, size_t length, void (*f)(T& arr_)) {
  for (size_t i = 0; i < length; i++) {
    f(address[i]);
  }
}

#endif
