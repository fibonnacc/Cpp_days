/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:48:16 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/27 18:48:16 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void  print_list(std::list<std::string>& lst) {
  std::list<std::string>::iterator it_b = lst.begin();
  std::list<std::string>::iterator it_e = lst.end();

  while (it_b != it_e) {
    std::cout << "[" << *it_b << "]" << "==>";
    it_b++;
  }
  std::cout << "NULL" << std::endl;
}

bool  RPN::isOperator(char c) {
  return (c == '+' || c == '-' || c == '/' || c == '*');
}

void  RPN::validate() {
  bool flag = false;
  std::list<std::string>::iterator it_b = this->lst.begin();
  std::list<std::string>::iterator it_e = this->lst.end();

  while (it_b != it_e) {
    std::string str = *it_b;
    for (size_t i = 0; i < str.size(); i++) {
      if (flag)
        throw std::runtime_error("bad input = [" + str + "]");
      if (std::isdigit(str[i])) {
        flag = true;
      }
      else if (this->isOperator(str[i])) {
        flag = true;
      }
      else if (!std::isdigit(str[i])) {
        throw std::runtime_error("bad input = [" + str + "]");
      }
    }
    flag = false;
    it_b++;
  }
}

void  RPN::MakeToken(char *av) {
  std::string line(av);
  std::stringstream ss(line);

  std::string token;
  while (ss >> token) {
    this->lst.push_back(token);
  }
  this->validate();
  print_list(this->lst);
}

RPN::RPN() {
}

RPN::RPN(const RPN &src) {
  (void)src;
}

RPN &RPN::operator=(const RPN &src) {
  (void)src;
  return *this;
}

RPN::~RPN() {
}
