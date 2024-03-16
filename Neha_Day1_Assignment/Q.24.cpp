/*10.Write a C program to find the eligibility of admission for a professional course based on 
the following criteria:
	Eligibility Criteria: 
	Marks in Math’s >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 
	or Total in Maths and Physics >=140. 
	assume
	Input the marks obtained in Physics :65
	Input the marks obtained in Chemistry :51 
	Input the marks obtained in Mathematics :72 
	Total marks of Maths, Physics and Chemistry: 188 
	Total marks of Maths and Physics: 137 
	The candidate is not eligible.
	Expected Output:
		The candidate is not eligible for admission.*/

#include <stdio.h>
int main() {
    int marksMath, marksPhy, marksChem, totalMarks, totalMarks1;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &marksPhy);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &marksChem);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &marksMath);

    totalMarks = marksMath + marksPhy + marksChem;
    totalMarks1 = marksMath + marksPhy;

	printf("Total marks of Maths, Physics and Chemistry:%d\n",totalMarks);
	printf("Total marks of Maths and Physics:%d\n",totalMarks1);
   
    if ((marksMath >= 65 && marksPhy >= 55 && marksChem >= 50 && totalMarks >= 190) || (marksMath + marksPhy >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
/*output:
Input the marks obtained in Physics: 65
Input the marks obtained in Chemistry: 51
Input the marks obtained in Mathematics: 72
Total marks of Maths, Physics and Chemistry:188
Total marks of Maths and Physics:137
The candidate is not eligible for admission.*/
	