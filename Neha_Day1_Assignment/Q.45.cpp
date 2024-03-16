/*11.	Write a program in C to make such a pattern like right angle triangle with number increased by 1.
The pattern like :
1
2 3
4 5 6
7 8 9 10*/

#include <stdio.h>

int main() {
    int rows;
    int currentNumber = 1;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

   
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d ", currentNumber);
            currentNumber++;
        }
        printf("\n");
    }

    return 0;
}
/*OUTPUT:
Enter the number of rows: 4
1
2 3
4 5 6
7 8 9 10*/
