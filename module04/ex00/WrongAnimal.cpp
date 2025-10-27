#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
  std::cout << "WrongAnimal is created" << std::endl;
  type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
  *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  if (this != &other) {
    this->type = other.type;
  }
  return *this;
}

void  WrongAnimal::setType(const std::string& str) {
  this->type = str;
}

std::string WrongAnimal::getType() const {
  return (type);
}

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal make no sound" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal say goodbye" << std::endl;
}
