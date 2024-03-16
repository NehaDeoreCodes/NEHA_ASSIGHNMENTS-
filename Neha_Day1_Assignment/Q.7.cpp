//2.  Write a program scan year  and print year is leap year or not.
#include<stdio.h>
main()
{
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	
	if((year%4==0&&year%100!=0)||(year%400==0))
	printf("it is a leap year",year);
	
	else
	printf("it is not leap year",year);
	return 0;
}

/*output:
Enter a year:2024
it is a leap year*/