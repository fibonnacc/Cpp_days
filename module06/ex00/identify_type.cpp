/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify_type.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:23:56 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/06 10:31:51 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool  ScalarConverter::is_char(const std::string& str) {
  if (str.length() == 1) {
    if (!std::isdigit(str[0]))
        return (true);
  }
  return (false);
}

bool  ScalarConverter::is_float(const std::string& str) {
  if (str.at(str.length() - 1) == 'f')
  {
    size_t i = 0;
    if (str.at(0) == '-' || str.at(0) == '+')
      ++i;
    while (i < str.length() - 1 && (std::isdigit(str[i]) || str[i] == '.')) {
      i++;
    }
    if (i == str.length() - 1)
      return (true);
  }
  return (false);
}

bool  ScalarConverter::is_double(const std::string& str) {
  if (str.find('.') != std::string::npos) {
    size_t i = 0;
    if (str.at(0) == '-' || str.at(0) == '+')
      ++i;
    while (i < str.length() && (std::isdigit(str[i]) || str[i] == '.')) {
      i++;
    }
    if (i == str.length()) {
      return (true);
    }
  }
  return (false);
}

bool  ScalarConverter::is_integer(const std::string& str) {
  size_t i = 0;
  if (str.at(0) == '-' || str.at(0) == '+') {
    ++i;
  }
  while (std::isdigit(str[i]))
    i++;
  if (i == str.length()) {
    return (true);
  }
  return (false);
}
