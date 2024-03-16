/*3.Write a program in C to display n terms of natural number and their sum. 
	Test Data : 7
	Expected Output :
		The first 7 natural number is :
		1 2 3 4 5 6 7
		The Sum of Natural Number upto 7 terms : 28*/
		
#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);
    for (int i = 1; i <= n; ++i) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe Sum of Natural Numbers up to %d terms: %d\n", n, sum);

    return 0;
}
/*OUTPUT:
Enter the value of n: 7
The first 7 natural numbers are:
1 2 3 4 5 6 7
The Sum of Natural Numbers up to 7 terms: 28*/
