#ifndef HI
#define HI

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
public:
  ScavTrap();
  ScavTrap(std::string str);
  void attack(const std::string& Target);
  void guardGate();
  ~ScavTrap();
};

#endif // !HICHAM

