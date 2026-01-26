/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:23:16 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/22 22:50:18 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER

#define WHATEVER

template <typename T>
void  swap(T& value1, T& value2) {
  T temp;
  temp = value1;
  value1 = value2;
  value2 = temp;
}

template <typename T>
T min(T value1, T value2) {
  if (value2 > value1) 
    return (value1);
  return (value2);
}

template <typename T>
T max(T value1, T value2) {
  if (value2 < value1) 
    return (value1);
  return (value2);
}

#endif
