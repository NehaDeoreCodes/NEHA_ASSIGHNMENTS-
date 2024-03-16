/*5.	Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
	Test Data: 21
	Expected Output:
		Congratulation! You are eligible for casting your vote.
*/
#include <stdio.h>
int main() 
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Congratulations! You are eligible for casting your vote.\n");
    } else {
        printf("Sorry, you are not eligible to vote yet.\n");
    }

    return 0;
}
/*OUTPUT:
Enter your age: 24
Congratulations! You are eligible for casting your vote.*/
