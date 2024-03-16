/*18.Write a program in C to calculate and print the Electricity bill of a given customer.The customer id., 
name and unit consumed by the user should be taken from the keyboard and display the total amount to
 pay to the customer. 
	The charge is as follow:
	Unit	Charge/unit
	up to 199	@1.20
	200 and above but less than 400	@1.50
	400 and above but less than 600	@1.80
	600 and above	@2.00
	If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-
	Test Data:
	1001
	James 
	800
	Expected Output:
		Customer IDNO :1001 
		Customer Name: James 
		unit Consumed :800
		Amount Charges @Rs. 2.00 per unit: 1600.00 
		Surcharge Amount: 240.00
		Net Amount Paid by the Customer: 1840.00*/
#include <stdio.h>

int main() {
    int customerId;
    char customerName[50];
    int unitsConsumed;
    float chargePerUnit, totalAmount, surcharge, netAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerId);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    if (unitsConsumed <= 199) {
        chargePerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargePerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    totalAmount = unitsConsumed * chargePerUnit;  
    if (totalAmount > 400) {
        surcharge = totalAmount * 0.15;
        if (surcharge < 100) {
            surcharge = 100;  
        }
    } else {
        surcharge = 0;
    }
    netAmount = totalAmount + surcharge;
    printf("\nCustomer IDNO: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %d\n", unitsConsumed);
    printf("Amount Charges @Rs.%f per unit: %f\n", chargePerUnit, totalAmount);
    printf("Surcharge Amount: %f\n", surcharge);
    printf("Net Amount Paid by the Customer: %f\n", netAmount);

    return 0;
}
/*Enter Customer ID: 1001
Enter Customer Name: JAMES
Enter Units Consumed: 800

Customer IDNO: 1001
Customer Name: JAMES
Unit Consumed: 800
Amount Charges @Rs.2.000000 per unit: 1600.000000
Surcharge Amount: 240.000000
Net Amount Paid by the Customer: 1840.000000*/
