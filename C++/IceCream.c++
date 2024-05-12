// Write a code to calculate volume
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Icecream
{
public:
    void Quantity(int r)
    {
        // Calculate the volume of a square
        double volume = pow(r, 3);
        cout << fixed << setprecision(2) << volume << endl;
    }

    void Quantity(int r, int h)
    {
        // Calculate the volume of a cone
        double volume = 0.33 * M_PI * r * r * h;
        cout << fixed << setprecision(2) << volume << endl;
    }
};

int main()
{
    int choice;
    cin >> choice;

    Icecream icecream;

    if (choice == 1)
    {
        int r;
        cin >> r;
        icecream.Quantity(r);
    }
    else if (choice == 2)
    {
        int r, h;
        cin >> r >> h;
        icecream.Quantity(r, h);
    }

    return 0;
}