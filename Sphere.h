
#ifndef SPHERE_H
#define SPHERE_H

#include "Vector.h"


struct Coord
{
	float x;
	float y;
	float z;
}


class Sphere
{
	public:
		Sphere(const Coord center, consti float radius);
		bool Intersect(const Vector vector);

	private:
		Coord center_;
		int raduis_;
};


#endif
