/*19.Write a program in C to print the Floyd's Triangle.
1
01
101
0101
10101
*/

#include <stdio.h>

int main() {
    int rows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
 
    for (int i = 1; i <= rows; ++i) {
        int num = i % 2;
        for (int j = 1; j <= i; ++j) {
            printf("%d", num);
            num = 1 - num; 
        }
        printf("\n");
    }

    return 0;
}

/*OUTPUT:
Enter the number of rows: 5
1
01
101
0101
10101
*/