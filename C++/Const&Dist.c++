#include <iostream>
using namespace std;

class MyClass
{
private:
    int data;

public:
    // Constructor
    MyClass(int d) : data(d)
    {
        cout << "Constructor called with parameter: " << data << endl;
    }

    // Default Constructor (constructor with no parameters)
    MyClass() : data(0)
    {
        cout << "Default Constructor called with default value: " << data << endl;
    }

    // Copy Constructor
    MyClass(const MyClass &other) : data(other.data)
    {
        cout << "Copy Constructor called with value: " << data << endl;
    }

    // Destructor
    ~MyClass()
    {
        cout << "Destructor called for data: " << data << endl;
    }

    void display()
    {
        cout << "Data: " << data << endl;
    }
};

int main()
{
    // Using Constructor
    MyClass obj1(42);

    // Using Default Constructor
    MyClass obj2;

    // Using Copy Constructor
    MyClass obj3 = obj1;

    // Displaying the data in the objects
    cout << "Object 1: ";
    obj1.display();

    cout << "Object 2: ";
    obj2.display();

    cout << "Object 3: ";
    obj3.display();

    // obj1 and obj2 will be destroyed when they go out of scope
    return 0;
}
