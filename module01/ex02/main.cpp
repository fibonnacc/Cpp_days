#include <iostream>

int main ()
{
  std::string  str = "HI THIS IS BRAIN";
  std::string  *stringPTR = &str;
  std::string  &stringREF = str;

  std::cout << "Memory address " << &str << std::endl;
  std::cout << "Memory address " << stringPTR << std::endl;
  std::cout << "Memory address " << &stringREF << std::endl;

  std::cout << "The value " << str << std::endl;
  std::cout << "The value " << *stringPTR << std::endl;
  std::cout << "The value " << stringREF << std::endl;

  return 0;
}
