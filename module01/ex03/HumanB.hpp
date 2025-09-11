#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
  std::string name;
  Weapon *weapon;
public:
  HumanB(std::string value) : name(value)
  {
    name = value;
    weapon = NULL;
  }
  void setWeapon(Weapon &obj)
  {
    weapon = &obj;
  }
  void  attack();
};

#endif 
