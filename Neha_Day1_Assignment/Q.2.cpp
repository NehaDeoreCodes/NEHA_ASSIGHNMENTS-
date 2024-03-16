//2. Write a program scan hours and convert in min and sec.
#include<stdio.h>
main()
{
	int hr,min,sec;
	printf("Enter a hours:");
	scanf("%d",&hr);
	min=hr*60;
	sec=hr*3600;
	
	printf("coverted values:\n");
	printf("min:%d\n",min);
	printf("sec:%d",sec);
	return 0;
}

/*output:
Enter a hours:2
coverted values:
min:120
sec:7200*/
