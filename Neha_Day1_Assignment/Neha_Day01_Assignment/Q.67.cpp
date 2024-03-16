/*32.	Write a C program to find HCF (Highest Common Factor) of two numbers. 
	Test Data :
		Input 1st number for HCF: 24 Input 2nd number for HCF: 28 	Expected Output :
		HCF of 24 and 28 is : 4
*/
#include <stdio.h>

int main() {
    int num1, num2, hcf;

    
    printf("Input 1st number for HCF: ");
    scanf("%d", &num1);
    printf("Input 2nd number for HCF: ");
    scanf("%d", &num2);

    
    int min = (num1 < num2) ? num1 : num2;

    
    for (int i = 1; i <= min; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

   
    printf("HCF of %d and %d is : %d\n", num1, num2, hcf);

    return 0;
}

/*OUTPUT:Input 1st number for HCF: 24
Input 2nd number for HCF: 28
HCF of 24 and 28 is : 4
*/