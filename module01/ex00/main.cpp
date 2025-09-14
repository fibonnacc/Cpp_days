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
  Zombie s1;
  std::string first_name;
  std::cout << "Enter the name : ";
  if (!getline(std::cin, first_name))
  {
    return (1);
  }
  s1.randomChump(first_name);
  s1.announce();
  Zombie *z = newZombie(first_name);
  z->announce();
  delete z;
  // std::cout << "Zombie " << first_name << " is destroyed" << std::endl;
  return 0;
}
