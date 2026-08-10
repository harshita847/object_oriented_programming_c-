#include <iostream>
#include <string>
using namespace std;
class teacher
{
public:
    string name;
    int age;
    teacher()
    {
        cout << "i am parent class" << endl; // first this cALL
    }
    // destructor
    ~teacher()
    {
        cout << "i am parent class destructor" << endl; // first this cALL
    }
};
class student : public teacher
{
public:
    int rollno;
    student()
    {
        cout << " i am child class constructor" << endl; // call after parent class
    }
    ~student()
    {
        cout << " i am child class destructor" << endl; // call after parent class
    }
};
int main()
{
    student s1;
    s1.name = "harshita jain";
    s1.age = 20;
    s1.rollno = 10;
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.rollno << endl;
}
