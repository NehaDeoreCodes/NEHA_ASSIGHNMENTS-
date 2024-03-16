/*24.	Write a program in C to display the pattern like a diamond.
*
***
*****
*******
*********
*******
*****
***
**/
#include <stdio.h>

int main() {
    int rows, i, j, space;

    
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &rows);

    
    for (i = 1; i <= rows; i += 2) {
       
        for (space = 1; space <= (rows - i) / 2; ++space) {
            printf(" ");
        }

       
        for (j = 1; j <= i; ++j) {
            printf("*");
        }

       
        printf("\n");
    }

    
    for (i = rows - 2; i >= 1; i -= 2) {
       
        for (space = 1; space <= (rows - i) / 2; ++space) {
            printf(" ");
        }

            for (j = 1; j <= i; ++j) {
            printf("*");
        }

      
        printf("\n");
    }

    return 0;
}


/*OUTPUT:
Enter the number of rows for the diamond: 5
*
***
*****
*******
*********
*******
*****
***
*
*/