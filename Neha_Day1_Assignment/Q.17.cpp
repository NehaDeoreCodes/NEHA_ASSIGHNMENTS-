/*3.	Write a C program to check whether a given number is positive or negative.
	Test Data: 15
	Expected Output:
		15 is a positive number*/
		
#include <stdio.h>
int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
/*OUTPUT:
Enter a number: -5
-5 is a negative number.*/
