#ifndef HI_
#define HI_

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
public:
  FragTrap();
  FragTrap(std::string str);
  void attack(const std::string& Target);
  void highFivesGuys(void);
  ~FragTrap();
};

#endif // !HICHAM

