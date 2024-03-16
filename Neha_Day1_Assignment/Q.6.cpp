//1. Write a program scan age and print person is minor.
#include<stdio.h>
main()
{
	int age;
	printf("Enter a age:");
	scanf("%d",&age);
	if(age<18)
		printf("person is minor");
	else
		printf("age:%d",age);
	return 0;
}
/*output:
Enter a age:5
person is minor*/