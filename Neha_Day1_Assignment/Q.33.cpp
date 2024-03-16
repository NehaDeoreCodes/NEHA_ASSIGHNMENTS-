/*19.Write a program in C to read any Month Number in integer and display the number of days for this month.
	Test Data:7
	Expected Output:
		Month have 31 days*/

#include <stdio.h>
int main() 
{
    int monthNumber;
    printf("Enter a Month Number: ");
    scanf("%d", &monthNumber);

    switch (monthNumber) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Month has 31 days.\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("Month has 30 days.\n");
            break;
        case 2:
            printf("Month has 28 or 29 days.\n");
            break;
        default:
            printf("Invalid Month Number.\n");
    }

    return 0;
}
/*OUTPUT:
Enter a Month Number: 7
Month has 31 days.
*/
