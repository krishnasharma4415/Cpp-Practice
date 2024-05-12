#include <iostream>
using namespace std;
// Base class for addition operation
template <typename T>
class Adder
{
public:
    virtual T add(T a, T b)
    {
        return a + b;
    }
};
// Subclass inheriting from Adder for double addition
template <typename T>
class DoubleAdder : public Adder<T>
{
public:
    virtual T add(T a, T b)
    {
        return a + b;
    }
};
// Subclass inheriting from DoubleAdder for triple addition
template <typename T>
class TripleAdder : public DoubleAdder<T>
{
public:
    T add(T a, T b, T c)
    {
        return a + b + c;
    }
};
// Functions for subtraction
template <typename T>
T subtract(T a, T b)
{
    return a - b;
}
// Functions for multiplication
template <typename T>
T multiply(T a, T b)
{
    return a * b;
}
template <typename T>
T multiply(T a, T b, T c)
{
    return a * b * c;
}
// Functions for division
template <typename T>
T divide(T a, T b)
{
    if (b == 0)
    {
        cout << "Error: Division by zero\n";
        return 0;
    }
    return a / b;
}
template <typename T>
T divide(T a, T b, T c)
{
    if (b == 0 || c == 0)
    {
        cout << "Error: Division by zero\n";
        return 0;
    }
    return a / b / c;
}
// Source code
int main()
{
    // Instances of the Adder classes for different types
    Adder<int> int_adder;
    TripleAdder<int> int_triple_adder;
    Adder<float> float_adder;
    int choice;
    do
    {
        // Menu for user selection
        cout << "Choose an option:\n";
        cout << "1. Add two integer numbers\n";
        cout << "2. Add three integer numbers\n";
        cout << "3. Add two floating point numbers\n";
        cout << "4. Subtract two numbers\n";
        cout << "5. Subtract three numbers\n";
        cout << "6. Subtract two floating point numbers\n";
        cout << "7. Multiply two integer numbers\n";
        cout << "8. Multiply three integer numbers\n";
        cout << "9. Multiply two floating point numbers\n";
        cout << "10. Divide two integer numbers\n";
        cout << "11. Divide three integer numbers\n";
        cout << "12. Divide two floating point numbers\n";
        cout << "13. Exit\n";
        // User input
        cin >> choice;
        switch (choice)
        {
        // Cases for different operations
        case 1:
        {
            int a, b;
            cout << "Enter two integer numbers:\n";
            cin >> a >> b;
            cout << "The sum is " << int_adder.add(a, b) << "\n";
            break;
        }
        case 2:
        {
            int a, b, c;
            cout << "Enter three integer numbers:\n";
            cin >> a >> b >> c;
            cout << "The sum is " << int_triple_adder.add(a, b, c) << "\n";
            break;
        }
        case 3:
        {
            float a, b;
            cout << "Enter two floating point numbers:\n";
            cin >> a >> b;
            cout << "The sum is " << float_adder.add(a, b) << "\n";
            break;
        }
        case 4:
        {
            auto a = 0, b = 0;
            cout << "Enter two numbers:\n";
            cin >> a >> b;
            cout << "The difference is " << subtract(a, b) << "\n";
            break;
        }
        case 5:
        {
            int a, b, c;
            cout << "Enter three integer numbers:\n";
            cin >> a >> b >> c;
            cout << "The difference is " << subtract(subtract(a, b), c) << "\n";
            break;
        }
        case 6:
        {
            float a, b;
            cout << "Enter two floating point numbers:\n";
            cin >> a >> b;
            cout << "The difference is " << subtract(a, b) << "\n";
            break;
        }
        case 7:
        {
            int a, b;
            cout << "Enter two integer numbers:\n";
            cin >> a >> b;
            cout << "The product is " << multiply(a, b) << "\n";
            break;
        }
        case 8:
        {
            int a, b, c;
            cout << "Enter three integernumbers:\n";
            cin >> a >> b >> c;
            cout << "The product is " << multiply(a, b, c) << "\n";
            break;
        }
        case 9:
        {
            float a, b;
            cout << "Enter two floating point numbers:\n";
            cin >> a >> b;
            cout << "The product is " << multiply(a, b) << "\n";
            break;
        }
        case 10:
        {
            int a, b;
            cout << "Enter two integer numbers:\n";
            cin >> a >> b;
            cout << "The quotient is " << divide(a, b) << "\n";
            break;
        }
        case 11:
        {
            int a, b, c;
            cout << "Enter three integer numbers:\n";
            cin >> a >> b >> c;
            cout << "The quotient is " << divide(a, b, c) << "\n";
            break;
        }
        case 12:
        {
            float a, b;
            cout << "Enter two floating point numbers:\n";
            cin >> a >> b;
            cout << "The quotient is " << divide(a, b) << "\n";
            break;
        }
        case 13:
        {
            cout << "Thank you for Playing. Bye!\n";
            break;
        }
        default:
        {
            cout << "Invalid option. Please try again.\n";
            break;
        }
        }
    } while (choice != 13); // Loop  runs until the user selects
    return 0;
}
