/*C Programming Conditional Statement

1.	Write a C program to accept two integers and check whether they are equal or not.
	Test Data: 15 15
	Expected Output:
		Number1 and Number2 are equal.*/

#include <stdio.h>
int main() 
{
    int number1, number2;
    
    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    if (number1 == number2)
	 	{
        	printf("Number1 and Number2 are equal.\n");
    	} 
	else 
		{
        	printf("Number1 and Number2 are not equal.\n");
    	}

    return 0;
}
/*OUTPUT:
Enter the first number: 50
Enter the second number: 50
Number1 and Number2 are equal.*/
