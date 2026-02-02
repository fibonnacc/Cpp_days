/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:43:34 by helfatih          #+#    #+#             */
/*   Updated: 2026/02/02 18:31:21 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME

#define PMERGEME

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>

class PmergeMe {
public:
  /************Method************/
  bool  isValidInput(const std::string &str);
  void  parseArgument(int ac, char **av);
  void  fillContainer(char **av);
  void  printBefore();
  void  printAfter();

  /************Canonical Orthodox************/
  PmergeMe();
  PmergeMe(const PmergeMe &other);
  PmergeMe &operator=(const PmergeMe &other);
  ~PmergeMe();

private:
  size_t _size;
  std::vector<int> vec;
  std::deque<int> deq;
};

#endif 
