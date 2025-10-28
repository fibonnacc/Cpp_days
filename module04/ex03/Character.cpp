#include "Character.hpp"


Character::Character() {
  _name = "";
  for (int  i = 0; i < 4; i++) {
    _inventory[i] = nullptr;
  }
}

Character::Character(std::string name) _name(name) {
  for (int i = 0; i < 4; i++) {
    _inventory[i] = nullptr;
  }
}

Character::Character(const Character& other) : _name(other.name) {
  for (size_t i = 0; i < 4; i++) {
    if (other._inventory[i]) {
      this->_inventory[i] = other._inventory[i];
    }
    else {
      this->_inventory[i] = nullptr;
    }
  }
}

Character::Character& operator=(const Character& other) {

}

~Character();

