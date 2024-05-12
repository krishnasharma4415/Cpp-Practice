#include <iostream>
#include <string>

using namespace std; // Add this line to use the std namespace

class Student
{
private:
    // Private data members (attributes)
    string name;
    int age;
    float gpa;

public:
    // Public member functions (methods) to access and manipulate data
    // Getter methods
    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }

    float getGPA() const
    {
        return gpa;
    }

    // Setter methods
    void setName(const string &newName)
    {
        name = newName;
    }

    void setAge(int newAge)
    {
        if (newAge >= 0)
        {
            age = newAge;
        }
        else
        {
            cout << "Invalid age input." << endl;
        }
    }

    void setGPA(float newGPA)
    {
        if (newGPA >= 0.0 && newGPA <= 4.0)
        {
            gpa = newGPA;
        }
        else
        {
            cout << "Invalid GPA input." << endl;
        }
    }
};

int main()
{
    // Create an instance of the Student class
    Student student;

    // Set student information using setter methods
    student.setName("Alice");
    student.setAge(20);
    student.setGPA(3.75);

    // Access and display student information using getter methods
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "GPA: " << student.getGPA() << endl;

    return 0;
}
