/*28.	Write a program in C to display the first n terms of Fibonacci series. Fibonacci series 0 1 2 3 5 8 13 .....
	Test Data :
		Input number of terms to display : 10
	Expected Output :
 		Here is the Fibonacci series upto to 10 terms :
		0 1 1 2 3 5 8 13 21 34*/
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input the number of terms to display
    printf("Input number of terms to display: ");
    scanf("%d", &n);

    printf("Here is the Fibonacci series up to %d terms:\n", n);

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
    }

    printf("\n");

    return 0;
}

/*OUTPUT:
Input number of terms to display: 10
Here is the Fibonacci series up to 10 terms:
0 1 1 2 3 5 8 13 21 34
*/