#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
  int fixed_point;
  static const int fractional_bit = 8; 
public:
  /* --- Constructors --- */
  Fixed();
  Fixed(const int integer_value);
  Fixed(const float float_value);
  Fixed(const Fixed &other);
  Fixed& operator=(const Fixed& other);

  /* --- Functions --- */
  float toFloat( void ) const;
  int toInt( void ) const;

  /* --- operator overloading --- */
  // ostream& operator<<(ostream& out, Fixed& s1);

  /* --- Getters and Setters --- */
  void setRawBits( int const raw );
  int getRawBits( void ) const;

  /* --- Destructor --- */
  ~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& s1);

 #endif
