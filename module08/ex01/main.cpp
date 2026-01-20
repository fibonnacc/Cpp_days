#include "Span.hpp"

int main() {
  try {
    Span sp = Span(8);
    sp.addNumber(-10);
    sp.addNumber(-5);
    sp.addNumber(2);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    // Sorted: -10, -5, 2
    // Gaps: 5 and 7
    std::cout << sp.shortestSpan() << std::endl; // Should be 5
    std::cout << sp.longestSpan() << std::endl;   // Should be 12
  }

  catch (std::exception &e) {
    std::cout << "Caught Exception : " << e.what() << std::endl;
  }

}
