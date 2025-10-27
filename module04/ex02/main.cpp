#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
  Animal* arr[50];
  Brain* obj1;

  for (int i = 0; i < 50; i++) {
    if (i % 2 == 0)
      arr[i] = new Dog();
    else if (i % 2 != 0)
        arr[i] = new Cat();
  }

  obj1 = arr[3]->get_Brain();
  obj1->plus_idea("i am so hungry");
  obj1->plus_idea("that was amazing");
  obj1->plus_idea("by the way my name hicham");

  std::cout << "this is the idea of animal 3 : " << arr[3]->get_Brain()->getIdea(1) << std::endl;
  
  for (size_t i = 0; i < 50; i++) {
    delete arr[i];
  }
}
