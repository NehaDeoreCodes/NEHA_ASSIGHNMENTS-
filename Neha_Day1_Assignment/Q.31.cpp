/*17.	Write a C program to check whether an alphabet is a vowel or consonant.
	Test Data: k
	Expected Output:
		The alphabet is a consonant.*/

#include <stdio.h>

int main() {
    char alphabet;
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);  
    
    if ((alphabet >= 'A' && alphabet <= 'Z') || (alphabet >= 'a' && alphabet <= 'z')) {
        
        switch (alphabet) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("The alphabet is a vowel.\n");
                break;
            default:
                printf("The alphabet is a consonant.\n");
        }
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}
/*OUTPUT:
Enter an alphabet: K
The alphabet is a consonant.
*/
