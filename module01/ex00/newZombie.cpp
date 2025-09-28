#include "Zombie.hpp"


Zombie* newZombie( std::string name )
{
  Zombie *s2 = new Zombie(name);
  s2->announce();
  return (s2);
}
