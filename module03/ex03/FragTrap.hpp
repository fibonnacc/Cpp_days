#ifndef HI_
#define HI_

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
{
public:
  FragTrap();
  FragTrap(std::string str);
  FragTrap(const FragTrap& other);
  FragTrap& operator=(const FragTrap& other);
  void highFivesGuys(void);
  ~FragTrap();
};

#endif // !HICHAM

