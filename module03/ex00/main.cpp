#include "ClapTrap.hpp"
#include <iostream>

int main ()
{
  ClapTrap a("Hicham");
  a.set_attack_Damage(10);
  a.takeDamage(6);
  a.beRepaired(4);
  a.attack("Lion");
  return 0;
}
