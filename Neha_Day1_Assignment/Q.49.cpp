/*14.Write a C program to calculate the factorial of a given number. 
	Test Data :
		Input the number : 5
	Expected Output :
		The Factorial of 5 is: 120*/
#include <stdio.h>

int main() {
    int number, factorial = 1;

    
    printf("Input the number: ");
    scanf("%d", &number);
    
    for (int i = 1; i <= number; ++i) 
	{
        factorial *= i;
    }
    printf("The Factorial of %d is: %d\n", number, factorial);

    return 0;
}

/*OUTPUT:
Input the number: 5
The Factorial of 5 is: 120*/