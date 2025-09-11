#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
  std::string name;
  Weapon &weapon;
public:
  HumanA(std::string value, Weapon &humanA) : name(value), weapon(humanA)
  {
  }
  void  attack();
};

#endif // !WEAPON_HPP
