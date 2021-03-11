#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;
    student()
    {
        cout << "Default Constructor" << endl;
    } // default constructor
    student(string s)
    {
        cout << "parameterised Constructor" << endl;

        name = s;
    } // parameterised constructor
    student(student &a)
    {
        cout << "copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    } // copy constructor
    ~student()
    {
        cout << "Destructor constructor" << endl;
    } // destructor constructor
    void setName(string s)
    {
        name = s;
    }
    void getName()
    {
        cout << name << endl;
    }
    void printInfo()
    {
        cout << "Name : " << name << endl
             << "Age : " << age << endl
             << "Gender : " << gender << endl
             << endl;
    }
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    // student a;
    // a.name = "Urvi";
    // a.age = 20;
    // a.gender = true;

    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << "Name = ";
    //     cin >> s;
    //     arr[i].setName(s);
    //     cout << "Age = ";
    //     cin >> arr[i].age;
    //     cout << "Gender = ";
    //     cin >> arr[i].gender;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }

    student a("Anish");
    a.getName();
    student b("Alpha");
    student c = a;
    if (b == a)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "not-same" << endl;
    }

    return 0;
}