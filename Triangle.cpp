// Program to check the Triangle type
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c && a == c)
        cout << "Equilateral triangle" << endl;
    else if (a == b)
        cout << "Isosceles triangle" << endl;
    else
        cout << "Scalene triangle" << endl;
    return 0;
}