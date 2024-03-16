//7. Write a program scan character and print character is vowel or not

#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf(" %c", &ch);  

	if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) 
			{
        		printf("The character '%c' is a vowel.\n", ch);
    		} 
		else
			{
        		printf("The character '%c' is not a vowel.\n", ch);
    		}

    return 0;
}

/*output:
Enter a character: e
The character 'e' is a vowel.
Enter a character: g
The character 'g' is not a vowel.*/
