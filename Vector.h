

#ifndef VECTOR_H

#define VECTOR_H

class Vector
{
	private:
		double x, y ,z;

	public:
		Vector();
		Vector(const double x, const double y, const double z);
		Vector(const Vector  &other);
		
		double magnitude() const;

		//operator overloads
		const Vector operator+(const Vector &other) const;
		const Vector operator-(const Vector &other) const;
		const Vector operator*(double value) const;
		const double operator*(const Vector &other) const;
		const Vector operator/(double value) const;

		//getters 
		const double get_x() const;
		const double get_y() const;
		const double get_z() const;

		const double angle(const Vector &other) const;
};


#endif
