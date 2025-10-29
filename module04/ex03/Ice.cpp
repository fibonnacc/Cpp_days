#include "Ice.hpp"

Ice::Ice() {
  _type = "ice";
}

Ice::Ice(const Ice& other) : AMateria(other) {
  *this = other;
}

Ice& Ice::operator=(const Ice& other) {
  if (this == &other)
    return *this;
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
  tmp = new Ice();
  return tmp;
}

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
