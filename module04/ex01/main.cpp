#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
  Animal* arr[50];
  Brain* obj1;
  Brain* obj2;
  Cat cat;

  for (int i = 0; i < 50; i++) {
    if (i % 2 == 0)
      arr[i] = new Dog();
    else if (i % 2 != 0)
        arr[i] = new Cat();
  }
  arr[3]->makeSound();
  arr[6]->makeSound();
  arr[8]->makeSound();
  arr[5]->makeSound();

  obj1 = cat.get_Brain();
  obj1->plus_idea("i am so hungry");
  obj1->plus_idea("that was amazing");
  obj1->plus_idea("by the way my name hicham");

  std::cout << "idea : " << obj1->getIdea(0) << std::endl;
  std::cout << "idea : " << obj1->getIdea(1) << std::endl;
  std::cout << "idea : " << obj1->getIdea(2) << std::endl;
  
  std::cout << "------------ the copy constructor called now -------------\n" << std::endl;

  Cat mi = cat;

  obj2 = cat.get_Brain();

  obj2->plus_idea("i am so hungry");
  obj2->plus_idea("that was amazing");
  obj2->plus_idea("by the way my name hicham");

  std::cout << "idea : " << obj2->getIdea(0) << std::endl;
  std::cout << "idea : " << obj2->getIdea(1) << std::endl;
  std::cout << "idea : " << obj2->getIdea(2) << std::endl;
  
  for (size_t i = 0; i < 50; i++) {
    delete arr[i];
  }
}
