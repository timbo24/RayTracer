

#ifndef VECTOR_H

#define VECTOR_H

class Vector
{
	private:
		float x, y ,z;

	public:
		Vector();
		Vector(const float x, const float y, const float z);
		Vector(const Vector  &other);
		
		float magnitude() const;

		//operator overloads
		const Vector operator+(const Vector &other) const;
		const Vector operator-(const Vector &other) const;
		const Vector operator*(float value) const;
		const Vector operator/(float value) const;

};


#endif
