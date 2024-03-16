/*1.
Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign
the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.*/

#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
public:
    void set(int roll, string& studentName)
	 {
        roll_no = roll;
        name = studentName;
    }
    void show() 
	{
        cout << "Roll No: " << roll_no << "\nName: " << name << endl;
    }
};

int main() 
{
    Student s1;
    s1.set(2, "John");
    s1.show();
    return 0;
}
/*output:
Roll No: 2
Name: John
*/