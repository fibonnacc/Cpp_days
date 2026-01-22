/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:50:05 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/22 10:39:30 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK

#define MUTANSTACK

#include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T> {
public:

  typedef typename std::stack<T>::container_type::iterator iterator;
  iterator begin();
  iterator end();

  MutantStack();
  MutantStack(const MutantStack &other);
  MutantStack &operator=(const MutantStack &other);
  ~MutantStack();

private:
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
  return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
  return (this->c.end());
}

template <typename T>
MutantStack<T>::MutantStack() {
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &other) : std::stack<T>(other) {
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other) {
  if (this != &other)
    std::stack<T>::operator=(other);
  return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {
}

#endif
