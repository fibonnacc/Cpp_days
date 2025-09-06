#include "Zombie.hpp"


Zombie* newZombie( std::string name )
{
  Zombie *s2 = new Zombie(name);
  return (s2);
}
