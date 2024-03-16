/*11.
Write a program that would print the information (name, year of joining, salary, address) of three
employees by creating a class named 'Employee'. The output should be as follows:
Name Year of joining Address
Robert 1994 64C- WallsStreat
Sam 2000 68D- WallsStreat
John 1999 26B- WallsStreat*/

#include <iostream>
#include <string>
using namespace std;

class Employee 
{
private:
    string name;
    int yearOfJoining;
    string address;
public:
    Employee(const string& n, int year, const string& addr) 
	{
	 	name=n;
		yearOfJoining=year;
	 	address=addr; 
 	}
    void display()  
	{
        cout << name << "\t" << yearOfJoining << "\t" << address << endl;
    }
};
int main() 
{
    Employee employee1("Robert", 1994, "64C- WallsStreat");
    Employee employee2("Sam", 2000, "68D- WallsStreat");
    Employee employee3("John", 1999, "26B- WallsStreat");

    
    cout << "Name\tYear of joining\tAddress" << endl;
    employee1.display();
    employee2.display();
    employee3.display();

    return 0;
}
/*OUTPUT:
Name    Year of joining Address
Robert  1994    64C- WallsStreat
Sam     2000    68D- WallsStreat
John    1999    26B- WallsStreat
*/
