//8. Write a program scan number 0-9 print in word

#include <stdio.h>
int main() 
{
    int number;
    printf("Enter a number between 0 and 9: ");
    scanf("%d", &number);
    
    switch (number) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 0 and 9.\n");
    }

    return 0;
}

/*output:
Enter a number between 0 and 9: 5
Five
Enter a number between 0 and 9: 10
Invalid input. Please enter a number between 0 and 9.*/
