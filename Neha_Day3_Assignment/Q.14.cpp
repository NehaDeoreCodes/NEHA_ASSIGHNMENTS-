/*Q.14 Write a program to print the roll number and average marks of 8 students in three subjects (each
out of 100). The marks are entered by the user and the roll numbers are automatically assigned.
and their heights are entered by the user.*/

#include <iostream>
using namespace std;
int main() 
{
    int stu = 8, sub=3, marks[stu][sub]; 
	float height[stu]; 
    for (int i = 0; i < stu; ++i)
	{
        cout << "\nRollNo:" <<i + 1<<endl;
        for (int j = 0; j < sub; ++j)
		{
            cout << "Enter subject Marks: ";
            cin >> marks[i][j];
        }
        
        cout << "Enter height for student " << i + 1 << " in centimeters: ";
        cin >> height[i];
    }
	cout << "\nRoll Number"" \tAverage Marks" "\theight"<< endl;
    for (int i = 0; i < stu; ++i) 
	{
        float sum = 0;
        for (int j = 0; j < sub; ++j) 
		{
            sum += marks[i][j];
            height[i];
        }
        cout << i + 1<<"\t\t"<< sum / sub <<"\t\t"<<height[i]<< endl;
    }
    return 0;
}
/*
RollNo:1
Enter subject Marks: 100
Enter subject Marks: 51
Enter subject Marks: 81
Enter height for student 1 in centimeters: 111

RollNo:2
Enter subject Marks: 32
Enter subject Marks: 62
Enter subject Marks: 52
Enter height for student 2 in centimeters: 122

RollNo:3
Enter subject Marks: 30
Enter subject Marks: 33
Enter subject Marks: 32
Enter height for student 3 in centimeters: 133

RollNo:4
Enter subject Marks: 40
Enter subject Marks: 44
Enter subject Marks: 43
Enter height for student 4 in centimeters: 144

RollNo:5
Enter subject Marks: 50
Enter subject Marks: 55
Enter subject Marks: 54
Enter height for student 5 in centimeters: 155

RollNo:6
Enter subject Marks: 60
Enter subject Marks: 66
Enter subject Marks: 65
Enter height for student 6 in centimeters: 166

RollNo:7
Enter subject Marks: 70
Enter subject Marks: 77
Enter subject Marks: 78
Enter height for student 7 in centimeters: 177

RollNo:8
Enter subject Marks: 80
Enter subject Marks: 88
Enter subject Marks: 87
Enter height for student 8 in centimeters: 188

Roll Number     Average Marks   height
1               77.3333         111
2               48.6667         122
3               31.6667         133
4               42.3333         144
5               53              155
6               63.6667         166
7               75              177
8               85              188*/