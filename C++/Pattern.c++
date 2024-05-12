// Program to print Diamond Pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            cout << n - min(min(i, j), min(2 * n - 2 - i, 2 * n - 2 - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}