
#ifndef SPHERE_H
#define SPHERE_H

#include "Vector.h"


class Sphere
{
	public:
		Sphere(const Vector center, const double radius);
		bool Intersect(const Vector vector);

	private:
		Vector center_;
		int radius_;
};


#endif
