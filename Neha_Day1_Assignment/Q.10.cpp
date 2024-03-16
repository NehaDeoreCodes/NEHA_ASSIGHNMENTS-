/*5. Write a program scan number between 1 to 500
---- print number between 1 to 250
--- print number between 251 to 500
--- print number not in 1 to 500*/

#include<stdio.h>
int main() 
{
    int number;
    printf("Enter a number between 1 to 500: ");
    scanf("%d", &number);
    
	if (number >= 1 && number <= 500)
	{
        if (number <= 250)
            printf("Number is between 1 to 250.\n");
        else
            printf("Number is between 251 to 500.\n");
    } 
	else 
	{
        printf("Number is not in the range of 1 to 500.\n");
    }

    return 0;
}

/*output:
Enter a number between 1 to 500: 455
Number is between 251 to 500.*/
