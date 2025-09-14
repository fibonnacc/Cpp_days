#ifndef ZOMBIE_HPP

#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
  private:
    std::string name;
  public:
    void randomChump( std::string name );
    void announce( void );
  Zombie() { name = ""; } 
  Zombie(std::string name);
  ~Zombie();
};

Zombie* newZombie( std::string name );

#endif // !
