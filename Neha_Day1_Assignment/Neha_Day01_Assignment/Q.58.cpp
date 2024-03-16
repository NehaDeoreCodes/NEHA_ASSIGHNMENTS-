/*23.	Write a C program to find the Armstrong number for a given range of number.
	Test Data :
		Input starting number of range: 1 Input ending number of range : 1000 
		Expected Output :
			Armstrong numbers in given range are: 1 153 370 371 407
*/
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

   
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return result == num;
}

int main() {
    int start, end;

    
    printf("Input starting number of range: ");
    scanf("%d", &start);
    printf("Input ending number of range: ");
    scanf("%d", &end);

   
    printf("Armstrong numbers in the given range are: ");
    for (int i = start; i <= end; ++i) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

/*OUTPUT:
Input starting number of range: 1
Input ending number of range: 1000
Armstrong numbers in the given range are: 1 2 3 4 5 6 7 8 9 153 370 371 407
*/