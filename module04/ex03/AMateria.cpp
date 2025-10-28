#include "AMateria.hpp"


AMateria::AMateria() {
  _type = "";
}

AMateria::AMateria(const AMateria& other) {
  *this = other;
}

AMateria::AMateria& operator=(const AMateria& other) {
  std::cout << "copying the type doesn’t make sense" << std::endl;
  return *this;
}

AMateria::~AMateria() {
}

AMateria(std::string const & type) {
  _type = type;
}

std::string const & getType() const {
  return (_type);
}

void use(ICharacter& target) {
  std::cout << ": * does something mysterious to " << target.getName() << " *" << std::endl;
}
