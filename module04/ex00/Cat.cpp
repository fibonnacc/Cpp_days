#include "Cat.hpp"

Cat::Cat() {
  std::cout << "Cat is created" << std::endl;
  type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {
  *this = other;
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    this->type = other.type;
  }
  return *this;
}

void Cat::makeSound() const {
  std::cout << "Cat : meows" << std::endl;
}

Cat::~Cat() {
  std::cout << "Cat say goodbye" << std::endl;
}


