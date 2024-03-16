/*2.Write a C program to find the sum of first 10 natural numbers.
	Expected Output :
		The first 10 natural number is :
		1 2 3 4 5 6 7 8 9 10
		The Sum is : 55*/
#include <stdio.h>

int main()
 {
    int sum = 0;
    printf("The first 10 natural numbers are:\n");
    
    for (int i = 1; i <= 10; ++i)
	{
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe Sum is: %d\n", sum);

    return 0;
}
/*OUTPUT:
The first 10 natural numbers are:
1 2 3 4 5 6 7 8 9 10
The Sum is: 55*/
