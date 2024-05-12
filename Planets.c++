/* 2. Create a class that captures planets. Each planet has a Name, a distance from the sun, and its gravity relative to Earth’s gravity.
        For distance and gravity, use the type double which captures real numbers. Make objects for Earth and your favorite non-Earth planet. */
#include <iostream>
#include <string>
using namespace std;
class planet
{
public:
    string Name;
    double Distance;
    double Gravity;
    void input()
    {
        cout << "Enter Name of the Planet : ";
        cin >> Name;
        cout << "Enter Distance from the Sun (million km) : ";
        cin >> Distance;
        cout << "Enter the Gravity relative to Earth : ";
        cin >> Gravity;
    }
};
int main()
{
    planet Earth;
    Earth.input();
    planet Venus;
    Venus.input();
    cout << "Planet : " << Earth.Name << endl;
    cout << "Distance from Sun : " << Earth.Distance << endl;
    cout << "Relative gravity : " << Earth.Gravity << endl;
    cout << "Planet : " << Venus.Name << endl;
    cout << "Distance from Sun : " << Venus.Distance << endl;
    cout << "Relative gravity : " << Venus.Gravity << endl;
    return 0;
}
