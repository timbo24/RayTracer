

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
	if (vector.get_x() < (center_.get_x() - radius_) ||
	    vector.get_x() > (center_.get_x() + radius_))
		return false;
	if (vector.get_y() < (center_.get_y() - radius_) ||
	    vector.get_y() > (center_.get_y() + radius_))
		return false;
	return true;
}

	    


