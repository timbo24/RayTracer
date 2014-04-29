#include <math.h>
#include <iostream>
#include <fstream>

#include "Vector.h"
#include "Sphere.h"

using namespace std;

void write_image()
{
	double x = 200;
	double y = 200;
	double z = 4;

	Vector h(x,y,z);
	Sphere test(h, 100);

	ofstream image("example.ppm");
	if (image.is_open())
	{
		image << "P3\n";
		image << "400 400\n";
		image << "190\n";

		for (int i = 0; i < 400; i++)
		{
			for (int j = 0; j < 400; j++)
			{
				Vector g(j, i, 4);

				if (test.Intersect(g))
					image << "142 35 35 ";
				else
					image << "0 128 0 ";
			}
			image <<"\n";
		}
	}
}

int main()
{

	/*
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
	*/


	write_image();
}






		


