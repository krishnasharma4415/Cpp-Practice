#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
        string name;
        int age;
        string gender;
    
    Student(string s="Krishna",int a=19,string g="Male")
    {
        name = s;
        age = a;
        gender = g;
    }

    void set(string s)
    {
        name = s;
    }

    void get()
    {

    }

    void Display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl; 
    }

    bool operator == (student &a)
    {
        if(name==a.name && age==a.age && gender==a.gender)
            return true;
        else
            return false;
    }

    ~Student()
    {
        cout << "Destructor" << endl;
    }
};
int main()
{
    string name;
    int age;
    string gender;
    int n;
    printf("Enter the no. of students: ");
    scanf("%d",&n);
    Student student[n];
    /*for(int i=0;i<n;i++)
    {
        printf("Student %d :\n",i+1);
        printf("Name: ");
        cin >> student[i].name;
        printf("Age: ");
        cin >> student[i].age;
        printf("Gender: ");
        cin >> student[i].gender;
    }
    for(int i=0;i<n;i++)
        student[i].Display();
    */
    for(int i=0;i<n;i++)
    {
        printf("Student %d :\n",i+1);
        printf("Name: ");
        cin >> name;
        printf("Age: ");
        cin >> age;
        printf("Gender: ");
        cin >> gender;
    }
    return 0;
}