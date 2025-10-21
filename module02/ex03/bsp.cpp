#include "Point.hpp"
#include "Fixed.hpp"


bool bsp(Point A, Point B, Point C, Point P)
{
    Fixed d1 = (B.get_x_value() - A.get_x_value()) * (P.get_y_value() - A.get_y_value()) - (B.get_y_value() - A.get_y_value()) * (P.get_x_value() - A.get_x_value());
    Fixed d2 = (C.get_x_value() - B.get_x_value()) * (P.get_y_value() - B.get_y_value()) - (C.get_y_value() - B.get_y_value()) * (P.get_x_value() - B.get_x_value());
    Fixed d3 = (A.get_x_value() - C.get_x_value()) * (P.get_y_value() - C.get_y_value()) - (A.get_y_value() - C.get_y_value()) * (P.get_x_value() - C.get_x_value());

    bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
    bool has_zero = (d1 == 0) || (d2 == 0) || (d3 == 0);

    if (has_zero)
        return (false);
    return !(has_neg && has_pos);
}    

