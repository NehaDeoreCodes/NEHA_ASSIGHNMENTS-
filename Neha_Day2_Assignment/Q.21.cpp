/*20. Write a program scan string and copy into another string
using function.*/

#include<iostream>
#include<string.h>
using namespace std;

	void mystring(char str1[],char str2[]) 
	{
		strcpy(str1,str2);
	}


main ()
{
	char str1[70], str2[70];
	cout<<"\nenter string=";
	cin>>str1>>str2;
	mystring(str2,str1);
	cout<<"\nmain string="<<str1;
	cout<<"\ncopy="<<str2;
}
/*output:
enter string=neha
deore

main string=neha
copy=neha*/