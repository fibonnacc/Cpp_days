#ifndef HI
#define HI

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
public:
  ScavTrap();
  ScavTrap(std::string str);
  ScavTrap& operator=(const ScavTrap& other);
  ScavTrap(const ScavTrap& other);
  void attack(const std::string& Target);
  void guardGate();
  ~ScavTrap();
};

#endif // !HICHAM

