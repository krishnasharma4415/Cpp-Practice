// Program to calculate area and perimeter
#include <iostream>
using namespace std;

class Shape
{
protected:
    double length;
    double width;

public:
    Shape(double len, double wid) : length(len), width(wid) {}

    double calculateArea()
    {
        return length * width;
    }

    double calculatePerimeter()
    {
        return 2 * (length + width);
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(double len, double wid) : Shape(len, wid) {}
};

class Square : public Shape
{
public:
    Square(double side) : Shape(side, side) {}
};

int main()
{
    double rectLength, rectWidth, squareSide;
    cin >> rectLength >> rectWidth >> squareSide;

    Rectangle rectangle(rectLength, rectWidth);
    Square square(squareSide);

    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;
    cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << endl;
    cout << "Square Area: " << square.calculateArea() << endl;
    cout << "Square Perimeter: " << square.calculatePerimeter() << endl;

    return 0;
}
