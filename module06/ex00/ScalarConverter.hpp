/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:26:00 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/05 20:50:46 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER

#define SCALARCONVERTER

#include <iostream>
#include <iomanip>
#include <string>
// #include <climits>
// #include <limits.h>
// #include <float.h>
#include <cstdlib>


class ScalarConverter {
private:

public:

  // Methode //
  static void convert(std::string& literal);
  static void identify_Type(std::string& str);
  static bool  is_char(const std::string& str);
  static bool  is_integer(const std::string& str);
  static bool  is_float(const std::string& str);
  static bool  is_double(const std::string& str);
  static bool  detect_overlfow(const std::string& str);
  static bool  check_pseudo(const std::string& str);
  static bool  Print_Pseudo(int i);
  static void  print_error();


  static void  conversion_char(const std::string& str);
  static void  conversion_float(const std::string& str);
  static void  conversion_double(const std::string& str);
  static void  conversion_integer(const std::string& str);

  // Canonical Orthodox //
  ScalarConverter();
  ScalarConverter(const ScalarConverter& thing);
  ScalarConverter &operator=(const ScalarConverter& thing);
  ~ScalarConverter();
};

#endif
