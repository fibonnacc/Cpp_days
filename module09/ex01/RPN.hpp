/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:48:20 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/27 18:48:20 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP

#define RPN_HPP

#include <iostream>
#include <sstream>
#include <list>

class RPN {
public:
  void  MakeToken(char *av);
  void  validate();
  bool  isOperator(char c);
  void  reversePolishNotation();
  int   doCalculation(int a, int b, char op);
  // bool checkOrder(char c, bool &d);
  RPN();
  RPN(const RPN &src);
  RPN &operator=(const RPN &src);
  ~RPN();

private:
  std::list<std::string>  lst;
};

#endif
