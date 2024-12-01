#include <iostream>
#include <string>
using namespace std;

string bitStuff(string data)
{
    string stuffed = "";
    int count = 0;

    for (char bit : data)
    {
        stuffed += bit;
        if (bit == '1')
        {
            count++;
            if (count == 5)
            {
                stuffed += '0';
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }
    return stuffed;
}

string bitDestuff(string stuffed)
{
    string destuffed = "";
    int count = 0;

    for (char bit : stuffed)
    {
        if (bit == '1')
        {
            count++;
            destuffed += bit;
            if (count == 5)
            {
                continue; // Skip the stuffed bit
            }
        }
        else
        {
            destuffed += bit;
            count = 0;
        }
    }
    return destuffed;
}

int main()
{
    string data;
    cout << "Enter the data bits: ";
    cin >> data;

    string stuffed = bitStuff(data);
    cout << "Stuffed Data: " << stuffed << endl;

    string destuffed = bitDestuff(stuffed);
    cout << "Destuffed Data: " << destuffed << endl;

    return 0;
}
