#include "Bureaucrat.hpp"

int main () {
  try {
    Form f("HOSSAM", 40, 38);
    Bureaucrat thing1("HICHAM", 14);
    thing1.signForm(f);
  }
  catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "************************\n"
            << "*      Second Test     *\n"
            << "************************\n";
  try {
    Form f("MONSIF", 4, 38);
    Bureaucrat thing2("Hicham", 10);
    thing2.signForm(f);
  }
  catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
  return 0;
}
