#include "Cure.hpp"

Cure::Cure() {
  _type = "cure";
}

Cure::Cure(const Cure& other) : AMateria(other) {
  *this = other;
}

Cure& Cure::operator=(const Cure& other) {
  if (this == &other)
    return *this;
  this->_type = other._type;
  return *this;
}

Cure::~Cure() {
}

Cure::Cure(std::string const & type) {
  _type = type;
}

AMateria* Cure::clone() const {
  AMateria* tmp;
  tmp = new Cure();
  return tmp;
}

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
