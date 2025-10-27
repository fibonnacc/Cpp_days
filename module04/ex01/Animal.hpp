#ifndef ANIMAL
#define ANIMAL

#include <iostream>
#include "Brain.hpp"

class Animal {
public:
  Animal();
  Animal(const Animal& other);
  Animal &operator=(const Animal& other);
  virtual void makeSound() const;

  void  setType(const std::string& str);
  std::string getType() const;

  virtual ~Animal();

protected:
  std::string type;
};

#endif // ! ANIMAL


