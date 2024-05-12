#include <iostream>
#include <string> // Include the <string> header for string data type
using namespace std;

class User
{
public:
    int borrowLimit;
    int borrowDuration;
    double fine;
};

class Student : public User
{
public:
    string Role = "Student"; // Use double quotes for string literals
};

class Faculty : public User
{
public:
    string Role = "Faculty"; // Use double quotes for string literals
};

int main()
{
    User u1;
    Student s1;
    Faculty f1;

    cout << "User Fine: " << u1.fine << endl;
    cout << "Student Fine: " << s1.fine << endl;
    cout << "Faculty Fine: " << f1.fine << endl;

    return 0;
}
