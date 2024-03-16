//4. Write a program scan age of person and print person is minor, major or senior citizen.
#include<stdio.h>
main()
{
	int age;
	printf("Enter a age:");
	scanf("%d",&age);
	
	if(age<18)
		printf("person is minor\n");
	else if(age>=18 && age<=60)
	
		printf("person is major\n");
	else
		printf("person is senior citizen");
	return 0;
}

/*output:
Enter a age:65
person is senior citizen*/