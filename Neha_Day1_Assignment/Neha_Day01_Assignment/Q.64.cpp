/*29.	Write a program in C to display the number in reverse order. 
	Test Data :
		Input a number: 12345
	Expected Output :
		The number in reverse order is : 54321*/
#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

   
    printf("Input a number: ");
    scanf("%d", &number);

   
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    
    printf("The number in reverse order is: %d\n", reversedNumber);

    return 0;
}

/*OUTPUT:
Input a number: 12345
The number in reverse order is: 54321
*/