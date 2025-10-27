#ifndef DOG
#define DOG

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
public:
  Dog();
  Dog(const Dog& other);
  Dog &operator=(const Dog& other);
  void makeSound() const;
  Brain* get_Brain() const;
  ~Dog();
private:
  Brain* obj1;
};

#endif // ! DOG


