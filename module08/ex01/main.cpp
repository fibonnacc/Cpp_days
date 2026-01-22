/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:28:03 by helfatih          #+#    #+#             */
/*   Updated: 2026/01/22 09:28:03 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main() {
  try {
    std::vector<int> ve;
    for (size_t i = 0; i < 10; i++) {
      ve.push_back(i + 1);
    }

    std::vector<int>::iterator it_b = ve.begin();
    std::vector<int>::iterator it_e = ve.end();

    for (/*empty*/; it_b != it_e; it_b++) {
      std::cout << "the value : " << *it_b << std::endl;
    }

    Span sp(10000);
    sp.addRange(it_b, it_e);

    std::cout << "the shortest : " << sp.shortestSpan() << std::endl;
    std::cout << "the longest : " << sp.longestSpan() << std::endl;

  }

  catch (std::exception &e) {
    std::cout << "Caught Exception : " << e.what() << std::endl;
  }

}
