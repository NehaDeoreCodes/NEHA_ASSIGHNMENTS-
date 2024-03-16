/*7.Write a program in C to display the n terms of odd natural number and their sum .
	Test Data
		Input number of terms : 10
	Expected Output :
		The odd numbers are :1 3 5 7 9 11 13 15 17 19
		The Sum of odd Natural Number upto 10 terms : 100*/
		
#include <stdio.h>

int main() 
{
    int terms;
    printf("Input number of terms: ");
    scanf("%d", &terms);
    int sum = 0;
    printf("The odd numbers are: ");
    for (int i = 1; i <= 2 * terms; i += 2) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe Sum of odd Natural Numbers up to %d terms: %d\n", terms, sum);

    return 0;
}
/*OUTPUT:
Input number of terms: 10
The odd numbers are: 1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Numbers up to 10 terms: 100*/
