/*15.Write a C program to check whether a triangle can be formed by the given value for the angles.
	Test Data: 40 55 65
	Expected Output: The triangle is not valid.*/
	
#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

   
    printf("Enter the values of three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
/*OUTPUT:
Enter the values of three angles of the triangle: 40
55
65
The triangle is not valid.*/
