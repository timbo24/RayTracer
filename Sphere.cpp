#include <cmath>
#include <math.h>
#include "Vector.h"
#include "Sphere.h"

using namespace std;

Sphere::Sphere(const Vector center, const double radius)
	:center_(center),
	 radius_(radius)
{
}


bool Sphere::Intersect(const Vector vector)
{
	return sqrt(pow(abs(vector.get_x() - center_.get_x()), 2) +
	            pow(abs(vector.get_y() - center_.get_y()), 2)) <= radius_;
}

	    


