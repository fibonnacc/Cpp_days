/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:23:16 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/14 17:31:00 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER

#define WHATEVER

template <typename T, typename T1>

void  swap(T& value1, T1& value2) {
  T temp;
  temp = value1;
  value1 = value2;
  value2 = temp;
}

template <typename T, typename T1>

T min(T value1, T1 value2) {
  if (value2 > value1) 
    return (value1);
  return (value2);
}

template <typename T, typename T1>

T max(T value1, T1 value2) {
  if (value2 > value1) 
    return (value2);
  return (value1);
}

#endif
