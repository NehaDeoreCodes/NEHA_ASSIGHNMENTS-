/*16.Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row.
      1
    2 2
  3 3 3
4 4 4 4*/

#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space) {
            printf("  ");
        }

        for (int j = 1; j <= i; ++j) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}

/*OUTPUT:
Enter the number of rows: 5
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5*/