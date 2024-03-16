/*7.Write a C program to accept the height of a person in centimeter and categorize the 
person according to their height.
	Test Data: 135
	Expected Output:The person is Dwarf.*/
	
#include <stdio.h>

int main() 
{
    int height; 
    printf("Enter the height in centimeters: ");
    scanf("%d", &height);

    if (height < 150) {
        printf("The person is Dwarf.\n");
    } else {
        printf("The person is not a Dwarf.\n");
    }

    return 0;
}
/*OUTPUT:
Enter the height in centimeters: 135
The person is Dwarf.*/
