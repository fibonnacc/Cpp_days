#include "Fixed.hpp"
#include "Point.hpp"

int	main()
{
	Point	a(2.02f, 0.83f);
	Point	b(2.66f, 1.68f);
	Point	c(1.24f, 1.91f);
	Point	p(2.07f, 1.46f);

	if (bsp(a, b, c, p) == true)
		std::cout << "The point 'p' inside the triange." << std::endl;
	else
		std::cout << "The point 'p' outside the triangle." << std::endl;
	return 0;
}
