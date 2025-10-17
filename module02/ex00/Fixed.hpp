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

  /* --- Copy constructor --- */
  Fixed(const Fixed &other);

  /* --- Copy assignement operator ---*/
  Fixed& operator=(const Fixed& other);

  void setRawBits( int const raw );
  int getRawBits( void ) const;
  ~Fixed();
};

 #endif // !DEBUG FIXED_HPP
