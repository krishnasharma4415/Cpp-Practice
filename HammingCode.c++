#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void calculateParityBits(vector<int> &data)
{
    int n = data.size();
    for (int i = 0; (1 << i) < n; i++)
    {
        int parity = 0;
        for (int j = 1; j <= n; j++)
        {
            if (j & (1 << i))
                parity ^= data[j - 1];
        }
        data[(1 << i) - 1] = parity;
    }
}

void detectAndCorrectError(vector<int> &data)
{
    int n = data.size();
    int errorPos = 0;

    for (int i = 0; (1 << i) < n; i++)
    {
        int parity = 0;
        for (int j = 1; j <= n; j++)
        {
            if (j & (1 << i))
                parity ^= data[j - 1];
        }
        errorPos += parity * (1 << i);
    }

    if (errorPos == 0)
    {
        cout << "No Error Detected!" << endl;
    }
    else
    {
        cout << "Error Detected at Position: " << errorPos << endl;
        data[errorPos - 1] ^= 1;
        cout << "Corrected Data: ";
        for (int bit : data)
            cout << bit;
        cout << endl;
    }
}

int main()
{
    int m, r = 0;
    cout << "Enter the number of data bits: ";
    cin >> m;

    while ((1 << r) < m + r + 1)
        r++;
    vector<int> data(m + r, 0);

    cout << "Enter the data bits: ";
    for (int i = 0, k = 0; i < data.size(); i++)
    {
        if ((i & (i + 1)) == 0)
            continue;
        cin >> data[i];
    }

    calculateParityBits(data);
    cout << "Data with Parity Bits: ";
    for (int bit : data)
        cout << bit;
    cout << endl;

    cout << "Enter received data: ";
    for (int &bit : data)
        cin >> bit;

    detectAndCorrectError(data);
    return 0;
}
