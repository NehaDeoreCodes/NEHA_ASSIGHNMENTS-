/*11.Write a C program to calculate the root of a Quadratic Equation. 
	Test Data: 1 5 7
	Expected Output:
		Root is imaginary;
		No solution.*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    printf("Enter the coefficients (a, b, c) separated by spaces: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root = %.2lf\n", root1);
    } else {
       
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are imaginary;\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
        printf("No solution.\n");
    }

    return 0;
}
/*OUTPUT:
Enter the coefficients (a, b, c) separated by spaces: 1
5
7
Roots are imaginary;
Root 1 = -2.50 + 0.87i
Root 2 = -2.50 - 0.87i
No solution.*/
