#include <math.h>
#include <iostream>
#include "Vector.h"

using namespace std;


Vector::Vector()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vector::Vector(const double x, const double y, const double z)
:x(x), y(y), z(z)
{
}

Vector::Vector(const Vector &other)
:x(other.x), y(other.y), z(other.z)
{
}

double Vector::magnitude() const 
{
	return sqrt(x*x + y*y + z*z);
}

const Vector  Vector::operator+(const  Vector &other) const
{
        return Vector(this->x + other.x, this->y + other.y, this->z + other.z);
}

const Vector Vector::operator-(const Vector &other) const
{
        return Vector(this->x - other.x, this->y - other.y, this->z - other.z);
}

const Vector Vector::operator*(double value) const
{
	return Vector(this->x*value, this->y*value, this->z*value);
}

const Vector Vector::operator/(double value) const
{
	return Vector(this->x/value, this->y/value, this->z/value);
}

const double Vector::get_x() const
{
	return x;
}

const double Vector::get_y() const
{
	return y;
}

const double Vector::get_z() const
{
	return z;
}
