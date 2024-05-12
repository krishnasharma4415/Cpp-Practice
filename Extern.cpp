// Extern Storage Class
#include <iostream>
using namespace std;
int globalvar = 10;
extern int globalvar;
int main()
{
int value = globalvar;
cout << "Global variable value: " << value;
return 0;
}
