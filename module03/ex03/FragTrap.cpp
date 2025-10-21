#include "FragTrap.hpp"
#include "ClapTrap.hpp"
// #include "FragTrap.hpp"

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
    ClapTrap::operator=(other); 
  }
  return (*this);
}

void FragTrap::attack(const std::string& Target)
{
  if (this->get_Energie() < 1)
  {
    std::cout << "FragTrap " << this->get_name() << " has no energy left and can't attack!" << std::endl;
    return;
  }
  this->set_Energie(get_Energie() - 1);
  std::cout << "FragTrap " << this->get_name() << " attack " << Target << " causing, " << this->get_attack_Damage()
            << " point of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->get_name() << " requests a positive high five! ✋" << std::endl;
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap " << get_name() << " is destroyed !" << std::endl;
}
