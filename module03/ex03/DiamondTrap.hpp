#ifndef   DIAMOND
#define   DIAMOND

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
private:
  std::string name;
public:
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap& other);
  DiamondTrap& operator=(const DiamondTrap& other);
  ~DiamondTrap();

  using ScavTrap::attack;

  void whoAmI();
};

#endif
