#include "Bureaucrat.hpp"

int main () {
  try {
    Bureaucrat thing1("Hicham", 149);
    thing1.decrement();
    std::cout << thing1 << std::endl;
  }
  catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
  try {
    Bureaucrat thing2("Hicham", 1);
    thing2.increment();
    std::cout << thing2 << std::endl;
  }
  catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}
