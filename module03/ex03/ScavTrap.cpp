#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
  std::cout << "ScavTrap default constructor called " << std::endl;
  this->set_HitPoint(100);
  this->set_Energie(50);
  this->set_attack_Damage(20);
}

ScavTrap::ScavTrap(std::string str)
{
  std::cout << "ScavTrap " << str << " is created" << std::endl;
  this->set_name(str);
  this->set_HitPoint(100);
  this->set_Energie(50);
  this->set_attack_Damage(20);
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
  *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
  // this->name = other.name;
  if (this != &other)
  {
    ClapTrap::operator=(other); 
  }
  return (*this);
}

void ScavTrap::attack(const std::string& Target)
{
  if (this->get_Energie() < 1)
  {
    std::cout << "ScavTrap " << this->get_name() << " has no energy left and can't attack!" << std::endl;
    return;
  }
  this->set_Energie(get_Energie() - 1);
  std::cout << "ScavTrap " << this->get_name() << " attack " << Target << " causing, " << this->get_attack_Damage()
            << " point of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->get_name() << " is now in Gate Keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap " << get_name() << " is destroyed !" << std::endl;
}
