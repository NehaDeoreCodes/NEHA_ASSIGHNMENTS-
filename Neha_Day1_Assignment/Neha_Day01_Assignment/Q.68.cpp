/*33.	Write a program in C to print a string in reverse order. 
	Test Data :
		Input a string to reverse : Welcome
	Expected Output :
		Reversed string is: emocleW
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    
    printf("Input a string to reverse: ");
    fgets(str, sizeof(str), stdin);

   
    str[strcspn(str, "\n")] = '\0';

   
    printf("Reversed string is: ");
    for (int i = strlen(str) - 1; i >= 0; --i) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}

/*OUTPUT:
Input a string to reverse: Welcome
Reversed string is: emocleW*/