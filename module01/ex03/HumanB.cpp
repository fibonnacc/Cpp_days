#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string value)
{
  name = value;
  weapon = NULL;
}

void HumanB::setWeapon(Weapon &obj)
{
  weapon = &obj;
}

void  HumanB::attack()
{
  if (weapon == NULL)
    return ;
  std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
