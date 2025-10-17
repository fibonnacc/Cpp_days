#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& out, const Fixed& s1)
{
  out << s1.toFloat(); 
  return (out);
}

Fixed::Fixed()
{
  fixed_point = 0;
}

Fixed::Fixed(const Fixed &other)
{
  *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
  if (this != &other)
    this->fixed_point = other.fixed_point;
  return (*this);
}

void Fixed::setRawBits( int const raw )
{
  fixed_point = raw;
}

int Fixed::getRawBits( void ) const
{
  return (fixed_point);
}

Fixed::Fixed(const int integer_value)
{
  fixed_point = integer_value << fractional_bit;
}

Fixed::Fixed(const float float_value)
{
  fixed_point = static_cast<int>(roundf(float_value * (1 << fractional_bit)));
}

int Fixed::toInt( void ) const
{
  return (fixed_point >> fractional_bit);
}

float Fixed::toFloat( void ) const
{
  return static_cast<float>(fixed_point) / (1 << fractional_bit);
}

/*------ the operator overloading ---------*/
bool Fixed::operator==(const Fixed& other) const
{
  return (fixed_point == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const
{
  return (fixed_point != other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const
{
  return (fixed_point < other.getRawBits());
}

bool Fixed::operator>(const Fixed& other) const
{
  return (fixed_point > other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const
{
  return (fixed_point <= other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const
{
  return (fixed_point >= other.getRawBits());
}

Fixed& Fixed::operator++()
{
  this->fixed_point++;
  return (*this);
}

Fixed Fixed::operator++(int)
{
  Fixed tmp(*this);

  this->fixed_point++;

  return (tmp);
}

Fixed& Fixed::operator--()
{
  this->fixed_point--;
  return (*this);
}

Fixed Fixed::operator--(int)
{
  Fixed tmp(*this);

  this->fixed_point--;

  return (tmp);
}

Fixed Fixed::operator+(Fixed const &other) const
{
  return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(Fixed const &other) const
{
  return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(Fixed const &other) const
{
  return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(Fixed const &other) const
{
  return (this->toFloat() / other.toFloat());
}

/*---- operator overloading end here ----*/

/*---- min and max functions ----*/

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
  if (a > b)
    return (a);
  return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
  if (a > b)
    return (a);
  return b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
  if (a < b)
    return (a);
  return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
  if (a < b)
    return (a);
  return b;
}


Fixed::~Fixed()
{
}
