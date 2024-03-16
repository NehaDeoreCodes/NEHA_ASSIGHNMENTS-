/*10.Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.
The pattern like :
1
22
333
4444*/

#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
/*OUTPUT:
Enter the number of rows: 4
1
22
333
4444*/
