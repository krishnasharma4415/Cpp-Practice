#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    Complex operator+(const Complex &obj) const
    {
        Complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }

    void print() const
    {
        cout << "Real: " << real << " Imaginary: " << img << endl;
    }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();

    return 0;
}
