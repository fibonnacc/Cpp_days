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
  HumanA(std::string value, Weapon &humanA) : weapon(humanA)
  {
    name = value;
  }
  void  attack();
};

#endif // !WEAPON_HPP
