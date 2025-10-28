#ifndef ANIMAL
#define ANIMAL

#include <iostream>
#include "Brain.hpp"

class Animal {
public:
  Animal();
  Animal(const Animal& other);
  Animal &operator=(const Animal& other);
  virtual void makeSound() const = 0;

  void  setType(const std::string& str);
  std::string getType() const;
	virtual Brain	*get_Brain() const = 0;

  virtual ~Animal();

protected:
  std::string type;
};

#endif // ! ANIMAL


