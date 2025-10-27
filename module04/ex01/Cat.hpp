#ifndef CAT
#define CAT

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal {
public:
  Cat();
  Cat(const Cat& other);
  Cat &operator=(const Cat& other);
  void makeSound() const;
  Brain* get_Brain() const;
  ~Cat();
private:
  Brain* obj2;
};

#endif // ! CAT


