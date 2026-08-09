#include <iostream>
#include <string>
using namespace std;
class teacher
{
public: // access modifiers
        // non parameter constructor
    teacher()
    { // no return type
        cout << "i am a constructor" << endl;
    };
    // parameterised constructor
    teacher(string s, string d)
    {
        name = s;
        subject = d;
    };
    void getinfo()
    {
        cout << name << endl;
        cout << subject << endl;
    }

    string name;
    int monthly_salary;
    string subject;
};
// constructor-
// 1. special member function
// 2. always public
// 3. a class can have multiple constructor but different parameter
int main()
{
    teacher t1("harshita", "maths"); // output = i am a constructor

    // call constructor whenever we create object automatically
    t1.getinfo();// output- harshita
                            //maths

    return 0;
}
