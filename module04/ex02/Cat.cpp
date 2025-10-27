#include "Cat.hpp"

Cat::Cat() {
  std::cout << "Cat is created" << std::endl;
  type = "Cat";
  obj2 = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
  *this = other;
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    Animal::operator=(other);
    this->type = other.type;
    this->obj2 = new Brain();
  }
  return *this;
}

void Cat::makeSound() const {
  std::cout << "Cat : meows" << std::endl;
}

Brain* Cat::get_Brain() const {
  return obj2;
}

Cat::~Cat() {
  delete obj2;
  std::cout << "Cat say goodbye" << std::endl;
}


