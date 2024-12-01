#include <iostream>
#include <cmath>
using namespace std;

void calculateSubnet(string ip, int subnetBits)
{
    int octets[4];
    sscanf(ip.c_str(), "%d.%d.%d.%d", &octets[0], &octets[1], &octets[2], &octets[3]);

    int classMask = 0, subnetMask = 0;
    char ipClass;

    if (octets[0] >= 1 && octets[0] <= 126)
    {
        ipClass = 'A';
        classMask = 8;
    }
    else if (octets[0] >= 128 && octets[0] <= 191)
    {
        ipClass = 'B';
        classMask = 16;
    }
    else if (octets[0] >= 192 && octets[0] <= 223)
    {
        ipClass = 'C';
        classMask = 24;
    }
    else
    {
        cout << "Invalid IP Address Class!" << endl;
        return;
    }

    cout << "Class: " << ipClass << endl;
    cout << "Default Mask: /" << classMask << endl;

    subnetMask = classMask + subnetBits;
    cout << "Subnet Mask: /" << subnetMask << endl;

    int totalSubnets = pow(2, subnetBits);
    cout << "Total Subnets: " << totalSubnets << endl;
}

int main()
{
    string ip;
    int subnetBits;
    cout << "Enter IP address: ";
    cin >> ip;
    cout << "Enter number of subnet bits: ";
    cin >> subnetBits;

    calculateSubnet(ip, subnetBits);
    return 0;
}
