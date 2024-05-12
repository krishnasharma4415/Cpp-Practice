#include <stdio.h>
#include <iostream>
using namespace std;
class Vector
{
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
    // Declaring friend function using friend keyword for the add operation
    friend Vector operator+(Vector &, Vector &);
};

Vector operator+(Vector &v1, Vector &v2)
{
    Vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    result.z = v1.z + v2.z;
    return result;
}

Vector operator-(Vector &v1, Vector &v2)
{
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    result.z = v1.z - v2.z;
    return result;
}

void printVector(Vector v)
{
    printf("%fi + %fj + %fk\n", v.x, v.y, v.z);
}

void printVectorComponents(Vector v)
{
    printf("the components of the vector are (%f, %f, %f)\n", v.x, v.y, v.z);
}

int main()
{
    Vector a = {1, 2, 3};
    Vector b = {3, 4, 5};
    Vector c;
    c = a + b;
    printVector(c);
    printVectorComponents(c);
    return 0;
}