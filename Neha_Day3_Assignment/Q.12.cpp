/*12.
Write a program to print the name, salary and date of joining of 10 employees in a company. Use
array of objects.*/

#include <iostream>
#include <string>
using namespace std;
class Employee 
{
private:
    string name;
    float salary;
    string dateOfJoining;
public:
    
    void set(const string& n, float sal, const string& doj) 
	{
        name = n;
        salary = sal;
        dateOfJoining = doj;
    }

    
    void display() 
	{
        cout<<"Name: "<<name<<", Salary: "<<salary<<", Date of Joining: "<<dateOfJoining<<endl;
    }
};

main() 
{
    
    Employee employees[10];

    employees[0].set("Jungkook", 50000, "2022-01-10");
    employees[1].set("V",		60000, "2021-11-15");
    employees[2].set("J Hope", 	55000, "2022-02-20");
    employees[3].set("Jimin", 	52000, "2020-09-25");
    employees[4].set("Suga", 	58000, "2022-03-05");
    employees[5].set("RM", 		63000, "2021-05-12");
    employees[6].set("Jin", 	54000, "2022-04-18");
    employees[7].set("mick", 	59000, "2021-07-30");
    employees[8].set("eleven", 	57000, "2020-12-05");
    employees[9].set("Will", 	61000, "2022-06-08");

   
    for(int i = 0; i < 10; ++i) {
        cout<<" Employee"<< i + 1<<" : ";
        employees[i].display();
    }

    return 0;
}

/*OUTPUT:
 Employee1 : Name: Jungkook, Salary: 50000, Date of Joining: 2022-01-10
 Employee2 : Name: V, Salary: 60000, Date of Joining: 2021-11-15
 Employee3 : Name: J Hope, Salary: 55000, Date of Joining: 2022-02-20
 Employee4 : Name: Jimin, Salary: 52000, Date of Joining: 2020-09-25
 Employee5 : Name: Suga, Salary: 58000, Date of Joining: 2022-03-05
 Employee6 : Name: RM, Salary: 63000, Date of Joining: 2021-05-12
 Employee7 : Name: Jin, Salary: 54000, Date of Joining: 2022-04-18
 Employee8 : Name: mick, Salary: 59000, Date of Joining: 2021-07-30
 Employee9 : Name: eleven, Salary: 57000, Date of Joining: 2020-12-05
 Employee10 : Name: Will, Salary: 61000, Date of Joining: 2022-06-08
*/