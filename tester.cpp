#include <math.h>
#include <iostream>
#include "Vector.h"

using namespace std;


int main()
{

	float x = 3;
	float y = 2;
	float z = 4;


	Vector h(x,y,z);

	cout<<h.magnitude()<<endl;
}
