/*Write a program to print the roll number and average marks of 8 students in three subjects (each
out of 100).The marks are entered by the user and the roll numbers are automatically assigned.*/
#include <iostream>
using namespace std;
int main() 
{
    int stu = 8, sub=3, marks[stu][sub];
    for (int i = 0; i < stu; ++i)
	{
        cout << "\nRollNo:" <<i + 1<<endl;
        for (int j = 0; j < sub; ++j)
		{
            cout << "Enter subject Marks: ";
            cin >> marks[i][j];
        }
    }
	cout << "\nRoll Number"" Average Marks"<< endl;
    for (int i = 0; i < stu; ++i) 
	{
        float sum = 0;
        for (int j = 0; j < sub; ++j) 
		{
            sum += marks[i][j];
        }
        cout << i + 1<<"\t\t"<< sum / sub << endl;
    }
    return 0;
}

/*Enter subject Marks: 60

RollNo:6
Enter subject Marks: 66
Enter subject Marks: 55
Enter subject Marks: 44

RollNo:7
Enter subject Marks: 78
Enter subject Marks: 48
Enter subject Marks: 98

RollNo:8
Enter subject Marks: 65
Enter subject Marks: 95
Enter subject Marks: 75

Roll Number Average Marks
1               70.6667
2               63.6667
3               83
4               80
5               50
6               55
7               74.6667
8               78.3333*/
