#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Hit_point(10), Energie(10), attack_damage(0)
{
  std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str) : name(str), Hit_point(10), Energie(10), attack_damage(0) 
{
  std::cout << "ClapTrap " << this->name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
  *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
  if (this != &other)
  {
    this->name = other.name;
    this->Hit_point = other.Hit_point;
    this->Energie = other.Energie;
    this->attack_damage = other.attack_damage;
  }
  return *this;
}

void ClapTrap::attack(const std::string& target)
{
  if (this->Energie < 1)
  {
    std::cout << "ClapTrap " << this->name << " has no energy left and can't attack!" << std::endl;
    return;
  }
  this->Energie -= 1;
  std::cout << "ClapTrap " + this->name + " attacks " + target + " causing, " << this->attack_damage << " point of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (amount > (unsigned int)this->Hit_point)
  {
    this->Hit_point = 0;
  }
  else
    this->Hit_point -= amount;

  std::cout << "ClapTrap " << this->name << " took " << amount << " point of damage !"
  << "Remainig HP : " << this->Hit_point << std::endl; 

  if (Hit_point == 0)
  {
    std::cout << "ClapTrap " << this->name << " has been destroyed!" << std::endl;
  }
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (Energie < 1)
      std::cout << "ClapTrap " << this->name << " has no energy left and can't repair itself!" << std::endl;
  else
  {
    Hit_point += amount;
    Energie -= 1;        
    std::cout << "ClapTrap " << this->name 
              << " repairs itself, gaining " << amount 
              << " hit points! Current HP: " << Hit_point 
              << ", Energy left: " << Energie << std::endl;
  }
}

/* ------------------ Getters and Setters ---------------- */

void ClapTrap::set_name(std::string str) {
  this->name = str;
}

void ClapTrap::set_HitPoint(int value) {
  this->Hit_point = value;
}

void ClapTrap::set_Energie(int value) {
  this->Energie = value;
}

void ClapTrap::set_attack_Damage(int value) {
  this->attack_damage = value;
}

std::string ClapTrap::get_name() {
  return (name);
}

int ClapTrap::get_HitPoint() {
  return Hit_point;
}

int ClapTrap::get_Energie() {
  return Energie;
}

int ClapTrap::get_attack_Damge() {
  return (attack_damage);
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap " << this->name << " is over" << std::endl;
}
