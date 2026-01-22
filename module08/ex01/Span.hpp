/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:28:10 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/22 09:28:10 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_
#define SPAN_

#include <iostream>
#include <vector>

class Span {
public:

  /************************/
  /*   methode function   */
  /************************/
  void  addNumber(int value);
  template <typename T>
  void  addRange(T begin, T end);
  unsigned int longestSpan();
  unsigned int shortestSpan();

  /************************/
  /*  Canonical Orthodox  */
  /************************/
  Span();
  Span(unsigned int value);
  Span(const Span &other);
  Span &operator=(const Span &other);
  ~Span();

private:
  std::vector<int> ve;
  unsigned int _size;
};

template <typename T>
void  Span::addRange(T begin, T end) {

  long distance = std::distance(begin, end);
  if (this->ve.size() + distance > _size) {
    throw std::runtime_error("No Space left in container!");
  }
  this->ve.insert(this->ve.end(), begin, end);
}

#endif // !DEBUG
