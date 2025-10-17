#ifndef HICHAM_EL_FATIHI
#define HICHAM_EL_FATIHI

#include "Fixed.hpp"
#include <iostream>

class Point 
{
private:
  Fixed const x;
  Fixed const y;
public:
  /*----- constructor ------*/
  Point();
  Point(const float fp1, const float fp2);

  /*----- copy constructor ------*/
  Point(const Point& other);
  Point& operator=(const Point& other);
  bool operator!=(const Point& other);

  Fixed get_x_value() const;
  Fixed get_y_value() const;

  /*----- Destructor ------*/
  ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
