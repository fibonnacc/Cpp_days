#ifndef CURE
#define CURE

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
public: 
  Cure();
  Cure(const Cure& other);
  Cure& operator=(const Cure& other);
  ~Cure();

  Cure(std::string const & type);
  AMateria* clone() const;
  void use(ICharacter& target);
};

#endif
