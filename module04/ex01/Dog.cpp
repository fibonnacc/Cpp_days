#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
  std::cout << "Dog is created" << std::endl;
  type = "Dog";
  obj1 = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
  *this = other;
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other) {
    this->type = other.type;
    this->obj1 = new Brain();
  }
  return *this;
}

void Dog::makeSound() const {
  std::cout << "Dog : bracks" << std::endl;
}

Brain* Dog::get_Brain() const {
  return obj1;
}

Dog::~Dog() {
  delete  obj1;
  std::cout << "Dog say goodbye" << std::endl;
}
