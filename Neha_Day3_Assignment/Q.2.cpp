/*2.Assign and print the roll number, phone number and address of two students having names "Sam"
and "John" respectively by creating two objects of the class 'Student'.*/

#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    string phoneNo;
	string address;
public:
    void set(int roll, const string& stuName, const string& Pno, const string& add )
	 {
        roll_no = roll;
        name = stuName;
        phoneNo= Pno;
       address = add;
    }
    void show() 
	{
        cout << "Roll No=" << roll_no << "\nName=" << name <<"\nPhonNO="<<phoneNo<<"\nAddress="<<address<< endl;
    }
};

int main() 
{
    Student s1, s2;
    s1.set(1,"john", "9056373445", "nashik");
    s1.show();
    s2.set(2,"sam", "8765896545", "pune");
    s2.show();
    
    return 0;
}
/*output:
Roll No=1
Name=john
PhonNO=9056373445
Address=nashik
Roll No=2
Name=sam
PhonNO=8765896545
Address=pune*/