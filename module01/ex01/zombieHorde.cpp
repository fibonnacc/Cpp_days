#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
  Zombie *z = new Zombie[N];

  for (int i = 0; i < N; i++)
  {
    std::cout << "Enter a name : ";
    if (!std::getline(std::cin, name))
    {
      std::cout << "Oops you exit the program" << std::endl;
      return (NULL);
    }
    z[i].set_Zombie(name);
  }

  for (int i = 0; i < N; i++)
  {
    z[i].announce();
  }
  return (z);
}

