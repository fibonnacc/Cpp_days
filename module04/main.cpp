#include <iostream>

class Animal {
public:
  Animal();
  virtual void  makeSound() const = 0;
  ~Animal();

private:
  std::string name;
};

Animal::Animal() {
  std::cout << "Animal is create an object" << std::endl;
}

Animal::~Animal() {
  std::cout << "Animal is over" << std::endl;
}

class Dog : Animal public {
public :
  Dog() {
    std::cout << "Dog is create an object" << std::endl;
  }

  void  makeSound() const {
    std::cout << "Dog : barcks" << std::end;
  }

  ~Dog() {
    std::cout << "Dog is over" << std::endl;
  }
};

int main (int argc, char *argv[]) {
  return 0;
}
