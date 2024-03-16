/*9.Write a C program to accept a coordinate point in a X and Y coordinate system and determine 
in which quadrant the coordinate point lies.
	Test Data: 7 9
	Expected Output: The coordinate point (7,9) lies in the First quadrant.*/

#include <stdio.h>

int main() 
{
    int x, y;
    printf("Enter the X coordinate: ");
    scanf("%d", &x);

    printf("Enter the Y coordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The coordinate point (%d,%d) lies in the Third quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("The coordinate point (%d,%d) is at the origin.\n", x, y);
    } else if (x == 0) {
        printf("The coordinate point (%d,%d) lies on the Y-axis.\n", x, y);
    } else {
        printf("The coordinate point (%d,%d) lies on the X-axis.\n", x, y);
    }

    return 0;
}
/*OUTPUT:
Enter the X coordinate: 7
Enter the Y coordinate: 9
The coordinate point (7,9) lies in the First quadrant.*/
