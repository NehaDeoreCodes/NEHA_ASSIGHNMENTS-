/*15.Write a program in C to display the n terms of even natural number and their sum.
	Test Data :
 		Input number of terms : 5
	Expected Output :
		The even numbers are :2 4 6 8 10
		The Sum of even Natural Number upto 5 terms : 30*/

#include <stdio.h>

int main() {
    int terms;
    printf("Input number of terms: ");
    scanf("%d", &terms);
    
    int sum = 0;
    printf("The even numbers are: ");
    
    for (int i = 1; i <= terms; ++i)
	 	{
       	 printf("%d ", 2 * i);
        	sum += 2 * i;
    	}

    printf("\nThe Sum of even Natural Numbers up to %d terms: %d\n", terms, sum);

    return 0;
}
/*OUTPUT:
Input number of terms: 5
The even numbers are: 2 4 6 8 10
The Sum of even Natural Numbers up to 5 terms: 30*/