#include "Zombie.hpp"

int main ()
{
  std::string N;
  int number;

  std::cout << "Enter the number : ";
  if (!std::getline(std::cin, N))
  {
    std::cout << "Oops you exit the program" << std::endl;
    return (1);
  }
  std::stringstream ss(N);
  ss >> number;
  Zombie* z = zombieHorde(number, "Ghoul");

  delete[] z;
  return 0;
}

