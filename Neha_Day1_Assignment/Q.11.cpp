/*6.  Write a program scan rollno and name of student scan 3 subject marks calculate total and percentage give 
class as distinction first class second class or fail and print marksheet*/

#include <stdio.h>
int main() 
{
    int rollno, sub_1, sub_2, sub_3, total_Marks;
    float per;
    char name[50];
    
    printf("Enter Roll Number: ");
    scanf("%d", &rollno);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks for Subject 1: ");
    scanf("%d", &sub_1);

    printf("Enter Marks for Subject 2: ");
    scanf("%d", &sub_2);

    printf("Enter Marks for Subject 3: ");
    scanf("%d", &sub_3);

   
     total_Marks = sub_1 + sub_2 + sub_3;
     per = total_Marks / 3;

   
    printf("\n--------- Mark Sheet ---------\n");
    printf("Roll Number: %d\n", rollno);
    printf("Student Name: %s\n", name);
    printf("Marks in Subject 1: %d\n", sub_1);
    printf("Marks in Subject 2: %d\n", sub_2);
    printf("Marks in Subject 3: %d\n", sub_3);
    printf("Total Marks: %d\n", total_Marks);
    printf("Percentage: %f%\n", per);

    if (per >= 75) {
        printf("Class: Distinction\n");
    } else if (per >= 60) {
        printf("Class: First Class\n");
    } else if (per >= 50) {
        printf("Class: Second Class\n");
    } else {
        printf("Class: Fail\n");
    }

    return 0;
}


/*output:
Enter Roll Number: 20
Enter Student Name: Neha
Enter Marks for Subject 1: 55
Enter Marks for Subject 2: 80
Enter Marks for Subject 3: 45

--------- Mark Sheet ---------
Roll Number: 20
Student Name: Neha
Marks in Subject 1: 55
Marks in Subject 2: 80
Marks in Subject 3: 45
Total Marks: 180
Percentage: 60.000000
Class: First Class*/

