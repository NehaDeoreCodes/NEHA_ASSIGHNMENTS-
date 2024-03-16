/*21.	Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
	Test Data :
		Input the number of terms : 5
	Expected Output :
		1 + 11 + 111 + 1111 + 11111
		The Sum is : 12345*/

#include <stdio.h>

int main() {
    int terms;

    
    printf("Input the number of terms: ");
    scanf("%d", &terms);

    
    int series = 0;
    int sum = 0;

    
    printf("The series is: ");
    for (int i = 1; i <= terms; ++i) {
        series = series * 10 + 1;
        printf("%d", series);
        sum += series;

        if (i < terms) {
            printf("+");
        }
    }

    
    printf("\nThe Sum is: %lld\n", sum);

    return 0;
}


/*OUTPUT:
Input the number of terms: 5
The series is: 1+11+111+1111+11111
The Sum is: 12345
*/