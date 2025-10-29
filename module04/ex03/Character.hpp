#ifndef CHARACTER
#define CHARACTER

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
  std::string _name;
  AMateria* _inventory[4];

  struct Node {
    AMateria* materia;
    Node* next;
    Node(AMateria* m);
  };
  static Node* floor;
public:
  static void clean_all();
  Character();
  Character(std::string name);
  Character(const Character& other);
  Character& operator=(const Character& other);
  virtual ~Character();
  

  std::string const& getName() const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter& target);
};

#endif
