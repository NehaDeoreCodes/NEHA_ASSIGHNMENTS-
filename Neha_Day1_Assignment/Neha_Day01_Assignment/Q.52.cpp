/*17.Write a program in C to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks.
      *
    ***
  ******/
  #include <stdio.h>

int main() {
    int rows;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

  
    for (int i = 1; i <= rows; ++i) {
       
        for (int space = 1; space <= rows - i; ++space) {
            printf("  ");
        }

        
        for (int j = 1; j <= (2 * i - 1); ++j) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

  /*OUTPUT:
  Enter the number of rows: 4
      *
    * * *
  * * * * *
* * * * * * *
  */