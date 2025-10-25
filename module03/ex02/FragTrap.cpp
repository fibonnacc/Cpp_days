#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
  std::cout << "FragTrap default constructor called " << std::endl;
  this->set_HitPoint(100);
  this->set_Energie(100);
  this->set_attack_Damage(30);
}

FragTrap::FragTrap(std::string str)
{
  std::cout << "FragTrap " << str << " is created" << std::endl;
  this->set_name(str);
  this->set_HitPoint(100);
  this->set_Energie(100);
  this->set_attack_Damage(30);
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
  *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
  if (this != &other)
  {
    this->set_name(other.get_name());
    this->set_Energie(other.get_Energie());
    this->set_HitPoint(other.get_HitPoint());
    this->set_attack_Damage(other.get_attack_Damage());
  }
  return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->get_name() << " requests a positive high five! ✋" << std::endl;
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap " << get_name() << " is destroyed !" << std::endl;
}
