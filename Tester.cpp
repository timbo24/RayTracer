#include <math.h>
#include <iostream>
#include "Vector.h"
#include "Sphere.h"

using namespace std;


int main()
{

	double x = 6;
	double y = 8;
	double z = 4;


	Vector h(x,y,z);

	Sphere test(h, 3);

	x = 7;
	y = 9;
	z = 4;

	Vector i(x,y,z);

	x = 10;
	y = 8;
	z = 4;

	Vector j(x,y,z);

	x = 7;
	y = 4;
	z = 4;

	Vector k(x,y,z);

	cout<<test.Intersect(h)<<endl;
	cout<<test.Intersect(i)<<endl;
	cout<<test.Intersect(j)<<endl;
	cout<<test.Intersect(k)<<endl;
}
