

#ifndef VECTOR_H

#define VECTOR_H

class vector
{
	private:
		float x, y ,z;

	public:
		vector();
		vector(const int x, const int y, const int z);
		vector(const vector  &other);
		
		float magnitude() const;

		//operator overloads
		const vector operator+(const vector &other) const;
		const vector operator-(const vector &other) const;
		const vector operator*(float value) const;
		const vector operator/(float value) const;

};


#endif
