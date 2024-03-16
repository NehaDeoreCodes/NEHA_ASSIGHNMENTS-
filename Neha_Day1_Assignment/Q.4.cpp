//4. write a program which calculate simple interest:logic si=p*r*n/100 amount=p+si
#include<stdio.h>
main()
{
	int p, r, n, si, amount;
	printf("enter a principal:");
	scanf("%d",&p);
	printf("enter a rate of intrest:");
	scanf("%d",&r);
	printf("enter a year:");
	scanf("%d",&n);
	
	si=p*r*n/100;
	amount=p+si;
	
	printf("principal:%d\n",p);
	printf("simple intrest:%d\n",si);
	printf("Total Amount:%d\n",amount);
	return 0;
}
/*output:
enter a principal:500
enter a rate of intrest:5
enter a year:5
principal:500
simple intrest:125
Total Amount:625*/