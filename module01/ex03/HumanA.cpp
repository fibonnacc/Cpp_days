#include "Weapon.hpp"
#include "HumanA.hpp"

void  HumanA::attack()
{
  const std::string& weaponType = weapon.getType();
  std::cout << name << " attacks with their " << weaponType << std::endl;
}
