#include <iostream>
#include<string.h>
using namespace std;
 
class student
 
{
	public:
    void student_data()
    {
        cout << "My name is ketan piprotar." << endl;
    }
};
 
class Student : public student
{
	public:
    void student_data()
    {
        cout << "I am studying at red&white multimedia education." << endl;
    }
};
 
int main()
{
    Student s1, s2;
    s1.student_data();
    s2.student::student_data();
    return 0;
}