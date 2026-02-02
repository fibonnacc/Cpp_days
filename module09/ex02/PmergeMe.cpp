/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:43:31 by helfatih          #+#    #+#             */
/*   Updated: 2026/02/02 18:32:34 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool PmergeMe::isValidInput(const std::string &str)
{
  unsigned int value;
  std::stringstream ss(str);
  char c;

  if (str[0] == '-')
    return (false);

  if (!(ss >> value))
    return (false);
  else if (ss >> c)
    return (false);
  this->vec.push_back((int)value);
  return (true);
}

void  print_(std::vector<int> ve) {
  std::vector<int>::iterator it_b = ve.begin();
  std::vector<int>::iterator it_e = ve.end();

  for (/*Empty*/ ; it_b != it_e; it_b++)
  {
    std::cout << "[" << *it_b << "]->";
  }
  std::cout << "NULL" << std::endl;
}

void PmergeMe::parseArgument(int ac, char **av)
{
  for (int i = 1; i < ac; i++)
  {
    std::string value(av[i]);
    if (!this->isValidInput(value))
      throw std::runtime_error("Invalid input");
  }
  // print_(this->vec);
}

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
  *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
  if (this == &other) {
    return *this;
  }
  this->vec = other.vec;
  this->deq = other.deq;
  return *this;
}

PmergeMe::~PmergeMe() {
}
