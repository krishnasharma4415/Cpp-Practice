// Program to manipulating string overloading << and = operators
#include <iostream>
#include <string>
using namespace std;

class StringHandler
{
private:
    string str;

public:
    StringHandler(const string &inputStr) : str(inputStr) {}

    StringHandler operator<<(const string &otherStr)
    {
        str += otherStr;
        return *this;
    }

    StringHandler operator=(const string &otherStr)
    {
        str = otherStr;
        return *this;
    }

    void display()
    {
        cout << "String: " << str << endl;
    }
};

int main()
{
    string firstStr, secondStr;

    getline(cin, firstStr);

    getline(cin, secondStr);
    StringHandler strHandler1(firstStr);
    StringHandler strHandler2(secondStr);

    strHandler1 << secondStr;

    cout << "Concatenated String: ";
    strHandler1.display();

    strHandler1 = secondStr;

    cout << "Assigned String: ";
    strHandler1.display();

    return 0;
}
