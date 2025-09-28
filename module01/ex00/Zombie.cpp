#include "Zombie.hpp"

Zombie::Zombie()
{
  name = "";
} 

void  Zombie::announce(void)
{
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
