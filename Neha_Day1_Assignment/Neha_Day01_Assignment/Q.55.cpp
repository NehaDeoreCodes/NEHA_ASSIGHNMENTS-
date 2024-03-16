/*20.	Write a program in C to display the n terms of square natural number and their sum. 1 4 9 16 ... n Terms 
	Test Data :
		Input the number of terms : 5
	Expected Output :
		The square natural upto 5 terms are :1 4 9 16 25
		The Sum of Square Natural Number upto 5 terms = 55*/
		
#include <stdio.h>

int main() {
    int terms;

   
    printf("Input the number of terms: ");
    scanf("%d", &terms);

    int sum = 0;

   
    printf("The square natural numbers up to %d terms are: ", terms);
    for (int i = 1; i <= terms; ++i) {
        int square = i * i;
        printf("%d ", square);
        sum += square;
    }

   
    printf("\nThe Sum of Square Natural Numbers up to %d terms = %d\n", terms, sum);

    return 0;
}

/*OUTPUT:
Input the number of terms: 5
The square natural numbers up to 5 terms are: 1 4 9 16 25
The Sum of Square Natural Numbers up to 5 terms = 55*/