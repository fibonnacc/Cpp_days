/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:28:07 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/22 09:28:07 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <list>


/************************/
/*   methode function   */
/************************/

unsigned int Span::longestSpan() {

  std::sort(ve.begin(), ve.end());

  std::vector<int>::iterator it_begin = this->ve.begin();
  std::vector<int>::iterator it_end = this->ve.end();

  std::vector<int>::iterator it_min = std::min_element(it_begin, it_end);
  std::vector<int>::iterator it_max = std::max_element(it_begin, it_end);

  return (*it_max - *it_min);
}

unsigned int Span::shortestSpan() {

  std::vector<int> lst;

  std::sort(ve.begin(), ve.end());

  for (unsigned int i = 0 ; i < this->_size - 1; i++) {
    unsigned int value = static_cast<unsigned int>(this->ve[i + 1] - this->ve[i]);
    lst.push_back(value);
  }
  std::sort(lst.begin(), lst.end());
  return (*lst.begin());
}

void  Span::addNumber(int value) {
  if (this->ve.size() >= _size) {
    throw std::runtime_error("Span is full");
  }
  std::vector<int>::iterator it_begin = this->ve.begin();
  std::vector<int>::iterator it_end = this->ve.end();

  for (/*empty*/ ; it_begin != it_end; it_begin++) {
    if (value == *it_begin) {
      throw std::runtime_error("Duplication Value");
    }
  }
  if (it_begin == it_end) {
    this->ve.push_back(value);
  }
}

/************************/
/*  Canonical Orthodox  */
/************************/
Span::Span() {
  _size = 0;
}

Span::Span(unsigned int value) : _size(value) {
  this->ve.reserve(value);
}

Span::Span(const Span &other) : _size(0) {
  *this = other;
}

Span &Span::operator=(const Span &other) {
  if (this != &other) {
    this->_size = other._size;
    this->ve = other.ve;
  }
  return (*this);
}

Span::~Span() {
}
