#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

int main() {
  std::cout << "=== Simple Materia Test ===" << std::endl;
  
  // Create characters
  ICharacter* me = new Character("me");
  ICharacter* bob = new Character("bob");
  
  // Create materias
  AMateria* ice = new Ice();
  AMateria* cure = new Cure();
  
  std::cout << "\nIce type: " << ice->getType() << std::endl;
  std::cout << "Cure type: " << cure->getType() << std::endl;
  
  // Equip materias
  std::cout << "\nEquipping materias..." << std::endl;
  me->equip(ice);
  me->equip(cure);
  
  // Use materias
  std::cout << "\nUsing materias on bob:" << std::endl;
  me->use(0, *bob);
  me->use(1, *bob);

  // Cleanup
  delete bob;
  delete me;
  Character::clean_all();
  
  std::cout << "\nTest completed!" << std::endl;
  return 0;
}
