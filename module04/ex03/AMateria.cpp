#include "AMateria.hpp"


AMateria::AMateria() {
  _type = "";
}

AMateria::AMateria(const AMateria& other) {
  *this = other;
}

AMateria& AMateria::operator=(const AMateria& other) {
  (void) other;
  std::cout << "copying the type doesn’t make sense" << std::endl;
  return *this;
}

AMateria::~AMateria() {
}

AMateria::AMateria(std::string const & type) {
  _type = type;
}

std::string const & AMateria::getType() const {
  return (_type);
}

void AMateria::use(ICharacter& target) {
  std::cout << ": * does something mysterious to " << target.getName() << " *" << std::endl;
}
