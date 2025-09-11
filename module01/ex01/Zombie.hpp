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
  Zombie()
  {
    name = "Unamed";
    N = 0;
  }
  void   set_Zombie(std::string name)
  {
    this->name = name;
  }
  ~Zombie()
  {
    std::cout << name << " : " << "is destroyed" << std::endl;
  }
};

Zombie* zombieHorde( int N, std::string name);

#endif




