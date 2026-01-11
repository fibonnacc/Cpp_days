/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:28:58 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/11 22:29:58 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cerrno>
#include <limits>
#include <cmath>

// Methode //

void  ScalarConverter::conversion_char(const std::string& str) {
  std::cout << "char : " << str[0] << std::endl;
  std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
  std::cout << "float : " << std::fixed << std::setprecision(2) << static_cast<float>(str[0]) << "f" <<  std::endl;
  std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<double>(str[0]) << std::endl;
}

void  ScalarConverter::conversion_float(const std::string& str) {
  double number = strtod(str.c_str(), 0);
  if (number < 0 || number > 127)
    std::cout << "char : impossible" << std::endl;
  else if (number < 32 || number == 127)
    std::cout << "char : non-printable" << std::endl;
  else
    std::cout << "char : " << "'" << static_cast<char>(number) << "'" << std::endl;

  if (detect_overlfow(str))
    std::cout << "int : impossible" << std::endl;
  else
    std::cout << "int : " << static_cast<int>(number) << std::endl;

  std::cout << "float : " << std::fixed << std::setprecision(2) << static_cast<float>(number) << "f" << std::endl;
  std::cout << "double : " << std::fixed << std::setprecision(2) << number << std::endl;
}

// #include <iostream>
// #include <iomanip>
// #include <bitset>

// void print_double_binary(double d) {
//     // 1. Take the address of the double (&d)
//     // 2. Cast it to an unsigned long long pointer
//     // 3. De-reference it to get the raw 64-bit integer
//     unsigned long long bits = *reinterpret_cast<unsigned long long*>(&d);
//
//     std::cout << "Double value: " << d << std::endl;
//
//     std::bitset<64> binary(bits);
//
//     std::cout << "Binary: " << binary << std::endl;
// }

void  ScalarConverter::conversion_double(const std::string& str) {
  double number = std::strtod(str.c_str(), 0);
  if (number < 0 || number > 127)
    std::cout << "char : impossible" << std::endl;
  else if (number < 32 || number == 127)
    std::cout << "char : non-printable" << std::endl;
  else
    std::cout << "char : " << "'" << static_cast<char>(number) << "'" << std::endl;

  if (detect_overlfow(str))
    std::cout << "int : impossible" << std::endl;
  else
    std::cout << "int : " << static_cast<int>(number) << std::endl;
  std::cout << "float : " << std::fixed << std::setprecision(2) << static_cast<float>(number) << "f" << std::endl;
  std::cout << "double : " << std::fixed << std::setprecision(2) << number << std::endl; 
}

void  ScalarConverter::conversion_integer(const std::string& str) {
  double number = strtod(str.c_str(), 0);
  if (number < 0 || number > 127)
    std::cout << "char : impossible" << std::endl;
  else if (number < 32 || number == 127)
    std::cout << "char : non-printable" << std::endl;
  else
    std::cout << "char : " << "'" << static_cast<char>(number) << "'" << std::endl;
  if (detect_overlfow(str))
    std::cout << "int : impossible" << std::endl;
  else
    std::cout << "int : " << static_cast<int>(number) << std::endl;
  std::cout << "float : " << std::fixed << std::setprecision(2) << static_cast<float>(number) << "f" << std::endl;
  std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<double>(number) << std::endl; 
}

bool  ScalarConverter::detect_overlfow(const std::string& str) {
  errno = 0;
  double value = strtod(str.c_str(), 0);

  if (value > std::numeric_limits<int>::max()) {
    return (true);
  }

  if (value < std::numeric_limits<int>::min()) {
    return (true);
  }
  return (false);
}

void  ScalarConverter::print_error() {
  std::cout << "char : impossible" << std::endl;
  std::cout << "int : impossible" << std::endl;
  std::cout << "float : impossible" << std::endl;
  std::cout << "double : impossible" << std::endl;
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
    if (detect_overlfow(str)) {
      return ;
    }
    conversion_integer(str);
  }
  else
    print_error();
}

bool  ScalarConverter::Print_Pseudo(int i) {
  if (i == 3) {
    return (false);
  }
  std::cout << "char : impossible" << std::endl;
  std::cout << "int : impossible" << std::endl;
  
  switch (i) {
    case 0:
      std::cout << "float : -inff" << std::endl;
      std::cout << "double : -inf" << std::endl;
      break;
    case 1:
      std::cout << "float : +inff" << std::endl;
      std::cout << "double : +inf" << std::endl;
      break;
    case 2:
      std::cout << "float : nanf" << std::endl;
      std::cout << "double : nan" << std::endl;
      break;
  }
  return (true);
}

bool  ScalarConverter::check_pseudo(const std::string& str) {
  std::string Pseudo1[3] = {"-inf", "+inf", "nan"};
  std::string Pseudo2[3] = {"-inff", "+inff", "nanf"};
  
  int i = 0;
  while (i < 3) {
    if (str == Pseudo1[i] || str == Pseudo2[i]) {
      break;
    }
    i++;
  }
  if (ScalarConverter::Print_Pseudo(i))
    return (true);
  return (false);
}

void ScalarConverter::convert(std::string& literal) {
  if (ScalarConverter::check_pseudo(literal)) {
    return ;
  }
  ScalarConverter::identify_Type(literal);
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
