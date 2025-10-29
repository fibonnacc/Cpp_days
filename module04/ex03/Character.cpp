#include "Character.hpp"

Character::Node* Character::floor = NULL;


Character::Character() {
  _name = "";
  for (int  i = 0; i < 4; i++) {
    _inventory[i] = NULL;
  }
}

Character::Character(std::string name) : _name(name) {
  for (int i = 0; i < 4; i++) {
    _inventory[i] = NULL;
  }
}

Character::Character(const Character& other) : _name(other._name) {
  for (size_t i = 0; i < 4; i++) {
    if (other._inventory[i]) {
      this->_inventory[i] = other._inventory[i]->clone();
    }
    else {
      this->_inventory[i] = NULL;
    }
  }
}

Character& Character::operator=(const Character& other) {
  if (this == &other) {
    return *this;
  }

  for (int i = 0; i < 4; i++) {
    delete _inventory[i];
    _inventory[i] = NULL;
  }

  for (int j = 0; j < 4; j++) {
    if (other._inventory[j]) {
      this->_inventory[j] = other._inventory[j]->clone();
    }
    else {
      this->_inventory[j] = NULL;
    }
  }
  return *this;
}

std::string const& Character::getName() const {
  return (_name);
}

Character::Node::Node(AMateria* m) : materia(m), next(NULL) {
}

void Character::equip(AMateria* m) {
  if (!m)
    return;
  for (size_t i = 0; i < 4; i++) {
    if (_inventory[i] == NULL) {
      _inventory[i] = m;
      return ;
    }
  }
}

void Character::unequip(int idx) {
  if (idx < 0 || idx >= 4 || !_inventory[idx])
    return;
  Node* new_node = new Node(_inventory[idx]);
  new_node->next = floor;
  floor = new_node;
  _inventory[idx] = NULL;
}

void Character::clean_all() {
  Node* current = floor;
  Node* next;
  while (current) {
    next = current->next;
    delete current->materia;
    delete current;
    current = next;
  }
  floor = NULL;
}

void Character::use(int idx, ICharacter& target) {
  if (idx < 0 || idx >= 4 || !_inventory[idx]) {
    return;
  }
  _inventory[idx]->use(target);
}

Character::~Character() {
  for (int i = 0; i < 4; i++) {
    delete _inventory[i];
  }
}
