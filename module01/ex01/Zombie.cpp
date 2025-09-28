#include "Zombie.hpp"

Zombie::Zombie()
{
  name = "Unamed";
  N = 0;
}

void   Zombie::set_Zombie(std::string name)
{
  this->name = name;
}

Zombie::~Zombie()
{
  std::cout << name << " : " << "is destroyed" << std::endl;
}

void  Zombie::announce()
{
  std::cout << name << " : " << "Brainnnnnnnnnnnzzz..." << std::endl;
}


