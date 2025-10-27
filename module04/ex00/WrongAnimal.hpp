#ifndef WRONGANIMAL
#define WRONGANIMAL

#include <iostream>

class WrongAnimal {
public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal& other);
  WrongAnimal &operator=(const WrongAnimal& other);
  
  void makeSound() const;

  void  setType(const std::string& str);
  std::string getType() const;

  virtual ~WrongAnimal();

protected:
  std::string type;
};

#endif // ! ANIMAL

