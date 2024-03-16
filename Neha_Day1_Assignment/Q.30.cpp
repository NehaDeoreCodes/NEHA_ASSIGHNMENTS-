/*16.Write a C program to check whether a character is an alphabet, digit or special character.
	Test Data:@
	Expected Output:
		This is a special character.*/
		
#include <stdio.h>

int main() 
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
        printf("This is an alphabet.\n");
    } else if (character >= '0' && character <= '9') {
        printf("This is a digit.\n");
    } else {
        printf("This is a special character.\n");
    }

    return 0;
}
/*OUTPUT:
Enter a character: @
This is a special character.*/
