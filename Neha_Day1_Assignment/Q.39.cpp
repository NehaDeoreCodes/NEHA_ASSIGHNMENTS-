/*5.Write a program in C to display the cube of the number upto given an integer.
	Test Data :
	Input number of terms : 5
	Expected Output :
		Number is : 1 and cube of the 1 is :1 
		Number is : 2 and cube of the 2 is :8 
		Number is : 3 and cube of the 3 is :27 
		Number is : 4 and cube of the 4 is :64 
		Number is : 5 and cube of the 5 is :125*/

#include <stdio.h>
int main() 
{
    int terms;
    
    printf("Input number of terms: ");
    scanf("%d", &terms);
    
    for (int i = 1; i <= terms; ++i) {
        printf("Number is: %d and cube of %d is: %d\n", i, i, i * i * i);
    }

    return 0;
}

/*OUTPUT:
Input number of terms: 5
Number is: 1 and cube of 1 is: 1
Number is: 2 and cube of 2 is: 8
Number is: 3 and cube of 3 is: 27
Number is: 4 and cube of 4 is: 64
Number is: 5 and cube of 5 is: 125*/