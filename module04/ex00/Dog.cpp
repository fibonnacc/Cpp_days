#include "Dog.hpp"

Dog::Dog() {
  std::cout << "Dog is created" << std::endl;
  type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other) {
  *this = other;
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other) {
    this->type = other.type;
  }
  return *this;
}

void Dog::makeSound() const {
  std::cout << "Dog : bracks" << std::endl;
}

Dog::~Dog() {
  std::cout << "Dog say goodbye" << std::endl;
}
