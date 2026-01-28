/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:48:16 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/28 11:34:27 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void  print_list(std::list<std::string>& lst) {
  std::cout << "/***************************************/" << std::endl;
  std::cout << "/***********THIS IS YOU LIST************/" << std::endl;
  std::cout << "/***************************************/" << std::endl;
  std::cout << std::endl;
  std::list<std::string>::iterator it_b = lst.begin();
  std::list<std::string>::iterator it_e = lst.end();

  while (it_b != it_e) {
    std::cout << "[" << *it_b << "]" << "==>";
    it_b++;
  }
  std::cout << "NULL" << std::endl;
  std::cout << std::endl;
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

int RPN::doCalculation(int a, int b, char op) {
  if (op == '+')
    return a + b;
  if (op == '-')
    return a - b;
  if (op == '*')
    return a * b;
  if (op == '/') {
    if (b == 0)
      throw std::runtime_error("division by zero");
    return a / b;
  }
  throw std::runtime_error("unknown operator");
}

void RPN::reversePolishNotation() {
  std::list<int> linked_list;

  for (std::list<std::string>::iterator it_b = this->lst.begin(); it_b != this->lst.end(); it_b++) {
    std::string token = *it_b;

    if (std::isdigit(token[0])) {
      linked_list.push_front(token[0] - '0');
    }
    else if (isOperator(token[0])) {
      if (linked_list.size() < 2) {
        throw std::runtime_error("bad input");
      }

      int first = linked_list.front();
      linked_list.pop_front();

      int second = linked_list.front();
      linked_list.pop_front();

      int result = doCalculation(second, first, token[0]);

      linked_list.push_front(result);
    }
  }
  if (linked_list.size() != 1)
      throw std::runtime_error("bad input");
  std::cout << "The Result : "<< linked_list.front() << std::endl;
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
