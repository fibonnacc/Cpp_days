/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:28:58 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/05 10:28:58 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Methode //

bool  ScalarConverter::is_char(const std::string& str) {
  if (str.length() == 1) {
    if (!isdigit(str[0]))
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
    while (i < str.length() - 1 && (std::isdigit(str.at(i)) || str.at(i) == '.')) {
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
    while (i < str.length() && (std::isdigit(str.at(i)) || str.at(i) == '.')) {
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
  if (std::isdigit(str.at(0)) == '-' || std::isdigit(str.at(0)) == '+')
    ++i;
  while (std::isdigit(str.at(i)))
    i++;
  if (i == str.length()) {
    return (true);
  }
  return (false);
}

void  ScalarConverter::conversion_char(const std::string& str) {
  std::cout << "char : " << str[0] << std::endl;
  std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
  std::cout << "float : " << std::fixed << std::setprecision(2) << static_cast<float>(str[0]) << "f" <<  std::endl;
  std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<double>(str[0]) << std::endl;
}

void  ScalarConverter::conversion_float(const std::string& str) {
  float number = atof(str.c_str());
  if (number < 0 || number > 127)
    std::cout << "char : out of range" << std::endl;
  else if (number < 32 || number == 127)
    std::cout << "char : non-printable" << std::endl;
  else
    std::cout << "char : " << "'" << static_cast<char>(number) << "'" << std::endl;
  std::cout << "int : " << static_cast<int>(number) << std::endl;
  std::cout << "float : " << std::fixed << std::setprecision(2) << number << "f" << std::endl;
  std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<double>(number) << std::endl;
}

void  ScalarConverter::conversion_double(const std::string& str) {
  float number = atof(str.c_str());
  if (number < 0 || number > 127)
    std::cout << "char : out of range" << std::endl;
  else if (number < 32 || number == 127)
    std::cout << "char : non-printable" << std::endl;
  else
    std::cout << "char : " << "'" << static_cast<char>(number) << "'" << std::endl;
  std::cout << "int : " << static_cast<int>(number) << std::endl;
  std::cout << "float : " << std::fixed << std::setprecision(2) << number << "f" << std::endl;
  std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<double>(number) << std::endl; 
}

void  ScalarConverter::conversion_integer(const std::string& str) {
  int number = atoi(str.c_str());
  if (number < 0 || number > 127)
    std::cout << "char : out of range" << std::endl;
  else if (number < 32 || number == 127)
    std::cout << "char : non-printable" << std::endl;
  else
    std::cout << "char : " << "'" << static_cast<char>(number) << "'" << std::endl;
  std::cout << "int : " << static_cast<int>(number) << std::endl;
  std::cout << "float : " << std::fixed << std::setprecision(2) << static_cast<float>(number) << "f" << std::endl;
  std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<double>(number) << std::endl; 
}

void  ScalarConverter::identify_Type(std::string& str) {
  if (is_char(str)) {
    conversion_char(str);
  }

  else if (is_float(str)) {
    conversion_float(str);
  }

  else if (is_double(str)) {
    conversion_double(str);
  }

  else if (is_integer(str)) {
    conversion_integer(str);
  }


  // else if (is_pseudo(str))

  else
    std::cout << "UNKNOWN" << std::endl;
}

void ScalarConverter::convert(std::string& literal) {
  identify_Type(literal);
}

// Canonical Orthodox //
ScalarConverter::ScalarConverter() {
  std::cout << "[D.C] => default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& thing) {
  (void)thing;
  std::cout << "[C.C] => copy constructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& thing) {
  (void)thing;
  std::cout << "[C.A.O] => copy assignment operator called" << std::endl;
  return *this;
}

ScalarConverter::~ScalarConverter() {
  std::cout << "[D] => destructor called" << std::endl;
}
