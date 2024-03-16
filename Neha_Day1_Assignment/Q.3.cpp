//3. write a progam scan year and convert in days and month
#include<stdio.h>
main()
{
	int yr, days, mon;
	printf("Enter a Year:");
	scanf("%d",&yr);
	mon=yr*12;
	days=yr*365;
	printf("converted values:\n");
	printf("Months:%d\n",mon);
	printf("Days:%d\n",days);
	return 0;
}

/*output:
Enter a Year:1
converted values:
Months:12
Days:365*/
