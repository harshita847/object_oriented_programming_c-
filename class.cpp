#include<iostream>
#include <string>
using namespace std;
class teacher {
    private:
    int age;   // data hiding
public:

// properties of object
string name;
int monthly_salary;
string subject;

// methods



};
int main()
{   teacher t1;
    t1.name="harshita jain";
    t1.monthly_salary=50,000;
    t1.subject="english";
    cout<<t1.name<<endl;
    cout<<t1.monthly_salary<<endl;
    cout<<t1.subject<<endl;
    


    return 0;
}