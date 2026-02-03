/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:23:16 by helfatih          #+#    #+#             */
/*   Updated: 2026/02/02 20:39:26 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER
#define WHATEVER

#include <iostream>

template <typename T>
void  swap(T& value1, T& value2) {
  T temp;
  temp = value1;
  value1 = value2;
  value2 = temp;
}

template <typename T>
T min(const T& value1, const T& value2) {
  if (value2 > value1) 
    return (value1);
  return (value2);
}

template <typename T>
T max(const T& value1, const T& value2) {
  if (value2 < value1) 
    return (value1);
  return (value2);
}

#endif
