#include "Point.hpp"
#include "Fixed.hpp"

/*----- constructor ------*/
Point::Point() : x(0), y(0)
{}

Point::Point(const float fp1, const float fp2): x(fp1), y(fp2)
{}

/*----- copy constructor ------*/
Point::Point(const Point& other) : x(other.x), y(other.y)
{}

/*----- Getter ------*/
Fixed Point::get_x_value() const
{
  return(this->x);
}

Fixed Point::get_y_value() const
{
  return(this->y);
}


/*----- operator overloaded ------*/
bool Point::operator!=(const Point& other)
{
  return (this->x != other.x || this->y != other.y);
}

/*----- Copy assignment operator ------*/
Point& Point::operator=(const Point& other)
{
  if (*this != other)
  {
    new (this) Point(other.get_x_value().toFloat(), other.get_y_value().toFloat());
  }
  return (*this);
}

/*----- Destructor ------*/
Point::~Point()
{}
