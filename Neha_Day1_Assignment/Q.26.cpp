/*12.Write a C program to read roll no, name and marks of three subjects and calculate 
the total, percentage and division.
	Test Data:
	Input the Roll Number of the student :784 
	Input the Name of the Student: James
	Input the marks of Physics, Chemistry and Computer Application: 70 80 90
	Expected Output:
		Roll No: 784
		Name of Student: James 
		Marks in Physics: 70 
		Marks in Chemistry: 80
		Marks in Computer Application: 90 
		Total Marks = 240
		Percentage = 80.00
		Division = First*/
		
#include <stdio.h>
int main() 
{
    int rollNumber;
    char name[50];
    int physics, chemistry, computerApplication;
    int totalMarks;
    float percentage;
    char division[20];

    printf("Input the Roll Number of the student: ");
    scanf("%d", &rollNumber);

    printf("Input the Name of the Student: ");
    scanf("%s", name);

    printf("Input the marks of Physics, Chemistry, and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &computerApplication);

    totalMarks = physics + chemistry + computerApplication;
    percentage = totalMarks / 3;

    if (percentage >= 60) {
        sprintf(division, "First");
    } else if (percentage >= 45) {
        sprintf(division, "Second");
    } else if (percentage >= 33) {
        sprintf(division, "Third");
    } else {
        sprintf(division, "Fail");
    }

    printf("\nRoll No: %d\n", rollNumber);
    printf("Name of Student: %s\n", name);
    printf("Marks in Physics: %d\n", physics);
    printf("Marks in Chemistry: %d\n", chemistry);
    printf("Marks in Computer Application: %d\n", computerApplication);
    printf("Total Marks = %d\n", totalMarks);
    printf("Percentage = %.2f\n", percentage);
    printf("Division = %s\n", division);

    return 0;
}
/*OUTPUT:
Input the Name of the Student: JAMES
Input the marks of Physics, Chemistry, and Computer Application: 70
80
90

Roll No: 784
Name of Student: JAMES
Marks in Physics: 70
Marks in Chemistry: 80
Marks in Computer Application: 90
Total Marks = 240
Percentage = 80.00
Division = First*/