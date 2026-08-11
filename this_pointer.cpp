#include <iostream>
#include <string>
using namespace std;
class teacher
{
public: 
string name;
    int monthly_salary;
    string subject;
    // access modifiers
        // non parameter constructor
    teacher()
    { // no return type
        cout << "i am a constructor" << endl;
    };
    // parameterised constructor
    teacher(string name, string subject)
    {
        this->name = name;
       this->subject = subject;   // this pointer
    };
    void getinfo()
    {
        cout << name << endl;
        cout << subject << endl;
    }

    
};

int main()
{
    teacher t1("harshita", "maths"); 
     t1.getinfo();
    return 0;
}
