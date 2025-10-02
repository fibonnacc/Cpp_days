#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& out, const Fixed& s1)
{
  out << s1.toFloat();
  return (out);
}

Fixed::Fixed()
{
  std::cout << "Default constructor called" << std::endl;
  fixed_point = 0;
}

Fixed::Fixed(const Fixed &other)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Fixed& Fixed:: operator=(const Fixed& other)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other)
    this->fixed_point = other.fixed_point;
  return (*this);
}

void Fixed::setRawBits( int const raw )
{
  std::cout << "setRawBits member function called" << std::endl;
  fixed_point = raw;
}

int Fixed::getRawBits( void ) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (fixed_point);
}

Fixed::Fixed(const int integer_value)
{
  std::cout << "Int constructor called" << std::endl;
  fixed_point = integer_value << fractional_bit;
}

Fixed::Fixed(const float float_value)
{
  std::cout << "Float constructor called" << std::endl;
  fixed_point = static_cast<int>(roundf(float_value * (1 << fractional_bit)));
}

int Fixed::toInt( void ) const
{
  // std::cout << "toInt is called" << std::endl;
  return (fixed_point >> fractional_bit);
}

float Fixed::toFloat( void ) const
{
  // std::cout << "toFloat is called" << std::endl;
  return static_cast<float>(fixed_point) / (1 << fractional_bit);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
