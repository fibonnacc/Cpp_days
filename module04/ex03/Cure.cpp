#include "Cure.hpp"

Cure::Cure() {
  _type = "";
}

Cure::Cure(const Cure& other) {
  *this = other;
}

Cure::Cure& operator=(const Cure& other) {
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
  tmp = new AMateria();
  return tmp;
}

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
