/*18.	Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
	Test Data :
		Input the number or terms :5
	Expected Output :
		9 99 999 9999 99999
		The sum of the saries = 111105*/

#include <stdio.h>

int main() {
    int terms;

    
    printf("Input the number of terms: ");
    scanf("%d", &terms);

    
    long long series = 0;
    long long sum = 0;
    int multiplier = 9;

   
    printf("The series is: ");
    for (int i = 1; i <= terms; ++i) {
        series = series * 10 + multiplier;
        printf("%lld ", series);
        sum += series;
    }

    printf("\nThe sum of the series = %lld\n", sum);

    return 0;
}

/*OUTPUT:
Input the number of terms: 5
The series is: 9 99 999 9999 99999
The sum of the series = 111105*/