#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
  int fixed_point;
  static const int fractional_bit = 8; 
public:
  Fixed();
  Fixed(const int integer_value);
  Fixed(const float float_value);
  Fixed(const Fixed &other);
  Fixed& operator=(const Fixed& other);
  float toFloat( void ) const;
  int toInt( void ) const;
  void setRawBits( int const raw );
  int getRawBits( void ) const;
  ~Fixed();
};

 #endif
