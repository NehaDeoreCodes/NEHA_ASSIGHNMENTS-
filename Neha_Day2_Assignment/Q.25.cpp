/*24. write a program create employee struct for 3 employees
 and print maximum salary;
*/
#include<iostream>
using namespace std;

struct employee
{
	int empno, salary;
	char ename[30];
};

int main()
{
	struct employee e1, e2, e3;
	cout<<"\n Enter empno, ename, salary=";
	cin>>e1.empno>>e1.ename>>e1.salary;
	
	cout<<"\n Enter empno, ename, salary=";
	cin>>e2.empno>>e2.ename>>e2.salary;
	
	cout<<"\n Enter empno, ename, salary=";
	cin>>e3.empno>>e3.ename>>e3.salary;

	cout<<"\n Details of Employees=";
	
	cout<<"\n empno="<<e1.empno<<"\n ename="<<e1.ename<<"\n salary="<<e1.salary;
	cout<<"\n empno="<<e2.empno<<"\n ename="<<e2.ename<<"\n salary="<<e2.salary;
	cout<<"\n empno="<<e3.empno<<"\n ename="<<e3.ename<<"\n salary="<<e3.salary;
	
	if (e1.salary > e2.salary >e3.salary)
	{
        cout << "\nEmployee with the highest salary: " << e1.ename << endl;
    } 
	else if (e2.salary> e2.salary > e1.salary) 
	{
        cout << "\nEmployee with the highest salary: " << e2.ename << endl;
        
    } 
	else
	{
		cout << "\nEmployee with the highest salary: " << e3.ename << endl;
        //cout << "\nBoth employees have the same salary." << endl;
    }
    return 0;	
}

/* OUTPUT:
Enter empno, ename, salary=
1
NEHA
500

 Enter empno, ename, salary=
2
ASHU
600

 Enter empno, ename, salary=
3
NAMO
700

 Details of Employees=
 empno=1
 ename=NEHA
 salary=500
 empno=2
 ename=ASHU
 salary=600
 empno=3
 ename=NAMO
 salary=700
Employee with the highest salary: NAMO*/