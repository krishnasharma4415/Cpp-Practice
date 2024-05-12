#include <stdio.h>
#include <iostream>
using namespace std;
class Vector {
public:
	double x, y, z;
	Vector()
	{
		this->x = 0;
		this->y = 0;
        this->z = 0;
	}
	// Constructor to initialize the object's value// Parameterized Constructor
	Vector(double xc, double yc, double zc)
	{
		this->x = xc;
		this->y = yc;
        this->z = zc;
	}
	// overriding the add operation
	Vector operator+(Vector& v2) // Call by reference
	{	// Create an object to return
		Vector result;
		// Perform addition of feet and inches
		result.x = this->x + v2.x;
        result.y = this->y + v2.y;
        result.z = this->z + v2.z;
		// Return the resulting object
		return result;
	}

	// overriding the substraction operation
	Vector operator-(Vector& v2) // Call by reference
	{	// Create an object to return
		Vector result;
		// Perform addition of feet and inches
		result.x = this->x - v2.x;
        result.y = this->y - v2.y;
        result.z = this->z - v2.z;
		// Return the resulting object
		return result;
	}

	// Similarly you can override equals method etc.
};

void printVector(Vector v) {
    printf("%fi + %fj + %fk\n", v.x, v.y, v.z);
}

void printVectorComponents(Vector v) {
    printf("the components of the vector are (%f, %f, %f)\n", v.x, v.y, v.z);
}

int main() {
    Vector a = {1, 2, 3};
    Vector b = {3, 4, 5};
    Vector c;
    c = a+ b;
    printVector(c);
    printVectorComponents(c);

    c = a - b;
    printVector(c);
    printVectorComponents(c);

    return 0;
}