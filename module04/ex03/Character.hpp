#ifndef CHARACTER
#define CHARACTER

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : publice ICharacter
{
private:
  std::string _name;
  AMateria* _inventory[4];
public:
  Character();
  Character(std::string name);
  Character(const Character& other);
  Character& operator=(const Character& other);
  ~Character();
};

#endif
