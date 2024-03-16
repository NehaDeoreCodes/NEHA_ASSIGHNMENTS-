/*21. Write a program create employee struct
with member variable as
empno
empname
salary
for 2 employees and print information about employee 
who got heighest salary*/

#include<iostream>
using namespace std;

struct employee
{
	int empno, salary;
	char ename[30];
};

int main()
{
	struct employee e1, e2;
	cout<<"\n Enter empno, ename, salary=";
	cin>>e1.empno>>e1.ename>>e1.salary;
	
	cout<<"\n Enter empno, ename, salary=";
	cin>>e2.empno>>e2.ename>>e2.salary;

	cout<<"\n Details of Employees=";
	
	cout<<"\n empno="<<e1.empno<<"\n ename="<<e1.ename<<"\n salary="<<e1.salary;
	cout<<"\n empno="<<e2.empno<<"\n ename="<<e2.ename<<"\n salary="<<e2.salary;
	
	if (e1.salary > e2.salary)
	{
        cout << "\nEmployee with the highest salary: " << e1.ename << endl;
    } 
	else if (e2.salary > e1.salary) 
	{
        cout << "\nEmployee with the highest salary: " << e2.ename << endl;
    } 
	else
	{
        cout << "\nBoth employees have the same salary." << endl;
    }
    return 0;	
}
/*output:
 Enter empno, ename, salary=
1
neha
500000000
 Enter empno, ename, salary=
2
ashu
50000000

 Details of Employees=
 empno=1
 ename=neha
 salary=500000000
 empno=2
 ename=ashu
 salary=50000000
Employee with the highest salary: neha*/