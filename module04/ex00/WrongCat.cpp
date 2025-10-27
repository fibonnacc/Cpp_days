#include "WrongCat.hpp"

WrongCat::WrongCat() {
  std::cout << "WrongCat is created" << std::endl;
  type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
  *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  if (this != &other) {
    this->type = other.type;
  }
  return *this;
}

void WrongCat::makeSound() const {
  std::cout << "WrongCat : meows" << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat say goodbye" << std::endl;
}


