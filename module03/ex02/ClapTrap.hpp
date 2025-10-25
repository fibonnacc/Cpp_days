#ifndef HICHAM
#define HICHAM

#include <iostream>

class ClapTrap
{
private:
  std::string name;
  int Hit_point;
  int Energie;
  int attack_damage;

public:
  ClapTrap();
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap& other);
  ClapTrap& operator=(const ClapTrap& other);
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  /* ------------------ Getters and Setters ---------------- */

  void set_name(std::string str);
  void set_HitPoint(int value);
  void set_Energie(int value);
  void set_attack_Damage(int value);
  std::string get_name() const;
  int get_HitPoint() const;
  int get_Energie() const;
  int get_attack_Damage() const;

  ~ClapTrap();
};

#endif // !HICHAM
