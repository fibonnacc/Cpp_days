#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
  Animal* arr[50];
  std::string str;

  for (int i = 0; i < 50; i++) {
    if (i % 2 == 0)
      arr[i] = new Dog();
    else if (i % 2 != 0)
        arr[i] = new Cat();
  }

  for (int i = 0; i < 50; i++) {
    std::cout << "Enter an idea, (you can break the loop by empty string!) : ";
    if (!std::getline(std::cin, str))
      break;
    if (str == "")
      break;
    arr[i]->get_Brain()->plus_idea(str);
  }
  
  for (size_t i = 0; i < 50; i++) {
    Brain* brain = arr[i]->get_Brain();
    for (size_t j = 0; j < 50; j++) {
      std::string idea = brain->getIdea(j);
      if (idea == "")
        break;
      else
        std::cout << "the idea N* " << i << " : " << idea << std::endl; 
    }
    delete arr[i];
  }
}
