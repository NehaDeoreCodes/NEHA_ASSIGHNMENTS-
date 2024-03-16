/*8.Write a program in C to display the pattern like right angle triangle using an asterisk.
The pattern like :
*
**
***
****
*/
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*OUTPUT:
Enter the number of rows: 4
*
**
***
****
*/
