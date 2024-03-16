/*30.	Write a program in C to check whether a number is a palindrome or not. 
	Test Data :
		Input a number: 121
	Expected Output :
		121 is a palindrome number.
*/
#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;
    printf("Input a number: ");
    scanf("%d", &number);
    
    originalNumber = number;
    
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    return 0;
}

/*OUTPUT:
Input a number: 121
121 is a palindrome number.*/