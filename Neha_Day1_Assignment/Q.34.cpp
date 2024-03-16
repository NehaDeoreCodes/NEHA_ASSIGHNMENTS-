/*20.	Write a program in C which is a Menu-Driven Program to compute the area 
of the various geometrical shape.*/
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double area;

    	printf("\nMenu:\n");
        printf("1. Calculate the area of a Circle\n");
        printf("2. Calculate the area of a Rectangle\n");
        printf("3. Calculate the area of a Triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                double radius;
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                area = M_PI * pow(radius, 2);
                printf("Area of the Circle: %.2lf\n", area);
                break;
            }
            case 2: {
                double length, width;
                printf("Enter the length of the rectangle: ");
                scanf("%lf", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%lf", &width);
                area = length * width;
                printf("Area of the Rectangle: %.2lf\n", area);
                break;
            }
            case 3: {
                double base, height;
                printf("Enter the base of the triangle: ");
                scanf("%lf", &base);
                printf("Enter the height of the triangle: ");
                scanf("%lf", &height);
                area = 0.5 * base * height;
                printf("Area of the Triangle: %.2lf\n", area);
                break;
            }
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
     

    return 0;
}
/* OUTPUT:
Menu:
1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Exit
Enter your choice (1-4): 2
Enter the length of the rectangle: 20
Enter the width of the rectangle: 40
Area of the Rectangle: 800.00*/
