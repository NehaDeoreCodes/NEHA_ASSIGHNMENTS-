/*9. Write a program create a menu
	1. odd/even
	2. major/ minor
	3. largest number from 2 numbers*/
	
#include <stdio.h>

int main() {
    int choice;
	 {
        printf("\n--------- Menu ---------\n");
        printf("1. Odd/Even\n");
        printf("2. Major/Minor\n");
        printf("3. Largest Number\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int number;
                printf("Enter a number: ");
                scanf("%d", &number);

                if (number % 2 == 0)
                    printf("%d is an even number.\n", number);
                else
                    printf("%d is an odd number.\n", number);
                break;
            }
            case 2: {
                int age;
                printf("Enter the age: ");
                scanf("%d", &age);

                if (age < 18)
                    printf("Person is a minor.\n");
                else
                    printf("Person is a major.\n");
                break;
            }
            case 3: {
                int num1, num2;
                printf("Enter the first number: ");
                scanf("%d", &num1);
                printf("Enter the second number: ");
                scanf("%d", &num2);

                if (num1 > num2)
                    printf("%d is the largest number.\n", num1);
                else if (num2 > num1)
                    printf("%d is the largest number.\n", num2);
                else
                    printf("Both numbers are equal.\n");
                break;
            }
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } 
     return 0;
}

/*output:
--------- Menu ---------
1. Odd/Even
2. Major/Minor
3. Largest Number
4. Exit
Enter your choice (1-4): 3
Enter the first number: 8
Enter the second number: 20
20 is the largest number.*/
	