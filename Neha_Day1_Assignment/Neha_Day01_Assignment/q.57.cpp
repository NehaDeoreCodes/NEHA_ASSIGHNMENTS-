/*22.	Write a C program to check whether a given number is an armstrong number or not.
	Test Data :
		Input a number: 153
		Expected Output :
		153 is an Armstrong number.*/
#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, n = 0, result = 0;
    printf("Input a number: ");
    scanf("%d", &number);
    originalNumber = number;

    while (originalNumber != 0) 
	{
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

  
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

/*OUTPUT:
Input a number: 153
153 is an Armstrong number.
*/