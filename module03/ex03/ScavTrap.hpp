#ifndef HI
#define HI

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap
{
public:
  ScavTrap();
  ScavTrap(std::string str);
  ScavTrap(const ScavTrap& other);
  ScavTrap& operator=(const ScavTrap& other);
  void attack(const std::string& Target);
  void guardGate();
  ~ScavTrap();
};

#endif // !HICHAM

