/*9.Write a program in C to display the pattern like right angle triangle with a number.
The pattern like :
1
12
123
1234*/

#include <stdio.h>
int main() 
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
/*OUTPUT:
Enter the number of rows: 4
1
12
123
1234*/
