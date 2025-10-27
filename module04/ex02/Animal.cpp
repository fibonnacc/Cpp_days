#include "Animal.hpp"

Animal::Animal() {
  std::cout << "Animal is created" << std::endl;
  type = "Animal";
}

Animal::Animal(const Animal& other) {
  *this = other;
}

Animal& Animal::operator=(const Animal& other) {
  if (this != &other) {
    this->type = other.type;
  }
  return *this;
}

void  Animal::setType(const std::string& str) {
  this->type = str;
}

std::string Animal::getType() const {
  return (type);
}


void Animal::makeSound() const {
  std::cout << "Animal make no sound" << std::endl;
}

Animal::~Animal() {
  std::cout << "Animal say goodbye" << std::endl;
}
