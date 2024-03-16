/*25.	Write a C program to determine whether a given number is prime or not. 
	Test Data :
		Input a number: 13
	Expected Output :
		13 is a prime number.*/
#include <stdio.h>

int main() {
    int number, i, isPrime = 1; 
    printf("Input a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}


/*OUTPUT:
Input a number: 13
13 is a prime number.*/