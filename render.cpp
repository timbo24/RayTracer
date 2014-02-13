//main function that will render the image



using namespace std;

int main()
{

}



void render()
{
	for (int x = 0; x < width; ++x)
	{
		for (int y = 0; y < height; ++y)
		{
			//TODO create a primary ray
			

			//TODO determine the closest object it hits
			

			//TODO if there is an intersection shoot a secondary ray
			if (intersects)
			{
				//TODO check to see if secondary rays intersect an object, if so they're in a shadow
			}

			//TODO if it's not in shadow add the base color to the illumination value
			if (!inshadow)
			{
				//TODO find the illumination value
				pixels[x][y] = color + get_illumination();
			}
			else
			{
				pixels[x][y] = 0;
			}
		}
	}	

	//TODO send pixels off to image writer to build the image
	build_image(pixels);
}
