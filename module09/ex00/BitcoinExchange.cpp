/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:58:42 by helfatih          #+#    #+#             */
/*   Updated: 2026/02/02 16:42:47 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, double> Parsser::getter() {
  return lst;
}

Parsser::Parsser() {
}

Parsser::Parsser(const Parsser &other) {
  *this = other;
}

Parsser &Parsser::operator=(const Parsser &other) {
  if (this == &other) {
    return *this;
  }

  this->lst = other.lst;
  return *this;
}

Parsser::~Parsser() {
}

void  Parsser::split_data(std::string& line, Parsser& Boss) {
  size_t begin = 0;
  size_t end = 0;

  end = line.find(',', begin);
  std::string rightSide = line.substr(begin, end - begin);

  begin = end + 1;
  std::string leftSide = line.substr(begin);

  double value = std::strtod(leftSide.c_str(), NULL);
  Boss.lst[rightSide] = value;
}