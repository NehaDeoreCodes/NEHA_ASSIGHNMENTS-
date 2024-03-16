/*6.Write a program in C to display the multiplication table of a given integer. 
	Test Data :
	Input the number (Table to be calculated) : 15
	Expected Output :
		15 X 1 = 15
			...
			...
		15 X 10 = 150*/

#include <stdio.h>
int main() 
{
    int number;
    printf("Input the number (Table to be calculated): ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; ++i) {
        printf("%d X %d = %d\n", number, i, number * i);
    }
    return 0;
}
		
/*OUTPUT:
Input the number (Table to be calculated): 15
15 X 1 = 15
15 X 2 = 30
15 X 3 = 45
15 X 4 = 60
15 X 5 = 75
15 X 6 = 90
15 X 7 = 105
15 X 8 = 120
15 X 9 = 135
15 X 10 = 150*/