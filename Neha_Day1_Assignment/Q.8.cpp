//3. Write a program scan age of person and print person is major or minor.
#include<stdio.h>
main()
{
	int age;
	printf("Enter a age:");
	scanf("%d",&age);
	
	if(age<18 )
		printf("person is minor");
	else
		printf("person is major");
		
		return 0;
	
}

/*output:
Enter a age:20
person is major*/