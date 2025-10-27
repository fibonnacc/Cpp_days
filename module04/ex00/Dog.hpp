#ifndef DOG
#define DOG

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
public:
  Dog();
  Dog(const Dog& other);
  Dog &operator=(const Dog& other);
  void makeSound() const;
  ~Dog();

};

#endif // ! DOG


