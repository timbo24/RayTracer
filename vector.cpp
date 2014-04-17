#include <math.h>
#include <iostream>
#include "vector.h"

using namespace std;


vector::vector()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

vector::vector(const int x, const int y, const int z)
:x(x), y(y), z(z)
{
}

vector::vector(const vector &other)
:x(other.x), y(other.y), z(other.z)
{
}

float vector::magnitude() const 
{
	return sqrt(x*x + y*y + z*z);
}


const vector  vector::operator+(const  vector &other) const
{
        return vector(this->x + other.x, this->y + other.y, this->z + other.z);
}

const vector vector::operator-(const vector &other) const
{
        return vector(this->x - other.x, this->y - other.y, this->z - other.z);
}



const vector vector::operator*(float value) const
{
	return vector(this->x*value, this->y*value, this->z*value);
}

const vector vector::operator/(float value) const
{
	return vector(this->x/value, this->y/value, this->z/value);
}

