#include "Ice.hpp"

Ice::Ice() {
  _type = "";
}

Ice::Ice(const Ice& other) {
  *this = other;
}

Ice::Ice& operator=(const Ice& other) {
  this->_type = other._type;
  return *this;
}

Ice::~Ice() {
}

Ice::Ice(std::string const & type) {
  _type = type;
}

AMateria* Ice::clone() const {
  AMateria* tmp;
  tmp = new AMateria();
  return tmp;
}

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
