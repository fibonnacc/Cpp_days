#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
  std::cout << "Zombie " << name << " is destroyed" << std::endl;
}

int main ()
{
  std::string first_name;
  std::cout << "Enter the name : ";
  if (!getline(std::cin, first_name))
  {
    return (1);
  }
  randomChump(first_name);
  Zombie *z = newZombie(first_name);
  delete z;
  return 0;
}
