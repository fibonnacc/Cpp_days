#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
  std::cout << "DiamondTrap " << this->name << " is created" << std::endl;
  this->name = ClapTrap::get_name();
  this->set_HitPoint(FragTrap::get_HitPoint());
  this->set_Energie(ScavTrap::get_Energie());
  this->set_attack_Damage(FragTrap::get_attack_Damage());
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
  *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
  if (this != &other)
  {
    this->name = other.name;
    this->set_HitPoint(other.get_HitPoint());
    this->set_Energie(other.get_Energie());
    this->set_attack_Damage(other.get_attack_Damage());
  }
  return (*this);
}

DiamondTrap::~DiamondTrap()
{
  std::cout << "DiamondTrap " << this->name << " is destroyed !" << std::endl;
}

void DiamondTrap::whoAmI()
{
  std::cout << "I am " << this->name << " and ClapTrap name is " << ClapTrap::get_name() << std::endl;
}
