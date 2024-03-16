/*4.Write a program in C to read 10 numbers from keyboard and find their sum and average.
		Test Data :
		Input the 10 numbers : 
		Number1 : 2
			.
			.
		Number10 :25
		Expected Output :
			The sum of 10 no is : 55 The Average is : 5.500000*/
			
#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    
    printf("Input the 10 numbers:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Number%d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    double average = (double)sum / 10;

    printf("\nThe sum of 10 numbers is: %d\n", sum);
    printf("The Average is: %.6lf\n", average);

    return 0;
}
/*OUTPUT:
Input the 10 numbers:
Number1: 2
Number2: 5
Number3: 4
Number4: 6
Number5: 4
Number6: 5
Number7: 7
Number8: 8
Number9: 9
Number10: 2

The sum of 10 numbers is: 52
The Average is: 5.200000*/
