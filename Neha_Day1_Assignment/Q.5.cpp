/*5.Write a program scan loan amount rate of interest number of years and calculate total EMI and EMI amount
and total payable loan  amount*/
#include<stdio.h>
#include<math.h>
main()
{
	float r, loan_amt, EMI, total_payble;
	int yr;
	printf("Enter a years:");
	scanf("%d",&yr); 
	
	printf("Enter a loan amount:");
	scanf("%f",&loan_amt);
	
	printf("Enter rate of intrest:");
	scanf("%f",&r);
	
	
	r=r/(12*100);
	yr=yr*12;
	EMI=(loan_amt*r*pow(1+r,yr)/(pow(1+r,yr)-1));
	total_payble=EMI*yr;
	
	printf("EMI Amount:%.6f\n",EMI);
	printf("Total payble loan amount:%.6d\n",total_payble);
	
	return 0;
	
}
/*output:
Enter a years:5
Enter a loan amount:10000
Enter rate of intrest:5
EMI Amount:188.710129
Total payble loan amount:-1073741824
*/