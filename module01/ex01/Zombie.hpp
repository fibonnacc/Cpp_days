#ifndef ZOMBIE_HPP

#define ZOMBIE_HPP

#include <iostream>
#include <sstream>

class Zombie
{
  private:
    int N;
    std::string name;
  public:
    void announce();
  Zombie();
  void   set_Zombie(std::string name);
  ~Zombie();
};

Zombie* zombieHorde( int N, std::string name);

#endif




