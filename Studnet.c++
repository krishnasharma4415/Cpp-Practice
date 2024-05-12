// Program to overload new nad delete operator for custom memory allocation and deallocation
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int age;

public:
    void *operator new(size_t size)
    {
        cout << "Custom new operator called" << endl;
        return ::operator new(size);
    }

    void operator delete(void *p)
    {
        cout << "Custom delete operator called" << endl;
        ::operator delete(p);
    }

    Student(const std::string &studentName, int studentAge) : name(studentName), age(studentAge) {}

    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    string name;
    int age;

    getline(std::cin, name);
    cin >> age;

    Student *student = new Student(name, age);

    student->displayDetails();

    delete student;

    return 0;
}