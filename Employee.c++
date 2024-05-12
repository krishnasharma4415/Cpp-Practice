// Program to sort employees and overload delete operator
#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
private:
    char *name;

public:
    Employee(const char *employeeName)
    {
        name = new char[strlen(employeeName) + 1];
        strcpy(name, employeeName);
    }

    void operator delete(void *ptr)
    {
        Employee *emp = static_cast<Employee *>(ptr);
        delete[] emp->name;
    }

    void display()
    {
        cout << "Employee's name: " << name << endl;
    }
};

int main()
{
    char employeeName[100];
    cin.getline(employeeName, 100);

    Employee *employee = new Employee(employeeName);

    employee->display();

    delete employee;

    return 0;
}
