/*12.	Write a program in C to make such a pattern like a pyramid with numbers increased by 1.
          1
     	 2 3
  	    4 5 6
	   7 8 9 10
	   */

#include <stdio.h>

int main() {
    int rows;
    int currentNumber = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; ++i) {
       
        for (int space = 1; space <= rows - i; ++space) {
            printf("   ");
        }

        for (int j = 1; j <= i; ++j) {
            printf("%2d     ", currentNumber);
            currentNumber++;
        }

        printf("\n");
    }

    return 0;
}


/*OUTPUT:
Enter the number of rows: 5
             1
          2      3
       4      5      6
    7      8      9     10
11     12     13     14     15*/