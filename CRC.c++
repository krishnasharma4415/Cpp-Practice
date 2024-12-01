#include <iostream>
#include <string>
using namespace std;

string xorOperation(string a, string b)
{
    string result = "";
    for (size_t i = 1; i < b.length(); i++)
        result += (a[i] == b[i]) ? '0' : '1';
    return result;
}

string mod2Division(string dividend, string divisor)
{
    int pick = divisor.length();
    string temp = dividend.substr(0, pick);

    while (pick < dividend.length())
    {
        if (temp[0] == '1')
            temp = xorOperation(temp, divisor) + dividend[pick];
        else
            temp = temp.substr(1) + dividend[pick];
        pick++;
    }

    if (temp[0] == '1')
        temp = xorOperation(temp, divisor);

    return temp.substr(1);
}

void CRC(string data, string divisor)
{
    int dataLen = data.length();
    int divisorLen = divisor.length();
    string appendedData = data + string(divisorLen - 1, '0');
    string remainder = mod2Division(appendedData, divisor);

    cout << "Remainder: " << remainder << endl;
    string codeword = data + remainder;
    cout << "Transmitted Codeword: " << codeword << endl;

    string receivedData;
    cout << "Enter received data: ";
    cin >> receivedData;
    string checkRemainder = mod2Division(receivedData, divisor);

    if (checkRemainder.find('1') == string::npos)
        cout << "No Error Detected!" << endl;
    else
        cout << "Error Detected!" << endl;
}

int main()
{
    string data, divisor;
    cout << "Enter data: ";
    cin >> data;
    cout << "Enter divisor: ";
    cin >> divisor;

    CRC(data, divisor);
    return 0;
}
