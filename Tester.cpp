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

	double x = 4;
	double y = 3;
	double z = 0;


	Vector a(x,y,z);

	x = 4;
	y = 0;
	z = 0;

	Vector b(x,y,z);

	cout<< a.angle(b) <<endl;

	/*
	cout<<test.Intersect(h)<<endl;
	cout<<test.Intersect(i)<<endl;
	cout<<test.Intersect(j)<<endl;
	cout<<test.Intersect(k)<<endl;
	*/


	//write image test
	//write_image();
}






		


