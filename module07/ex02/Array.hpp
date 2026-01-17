/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 11:37:44 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/17 11:37:44 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY

#define ARRAY

#include <iostream>

template<typename T>
class Array {
private:
  T *_element;
  unsigned int _size;
public:
  unsigned int size() const;
  Array();
  T& operator[](unsigned int index);
  const T& operator[](unsigned int index) const;
  Array(unsigned int n);
  Array(const Array& other);
  Array& operator=(const Array& other);
  ~Array();
};

#endif
