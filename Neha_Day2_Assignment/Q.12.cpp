/*12. Write a program scan 10 numbers for array
 print array with index and calculated sum of even numbers and total even numbers.*/
 
 #include <iostream>
using namespace std;

int main() 
{
    int size = 10;
    int numbers[size];
    int sumEven = 0;
    int countEven = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < size; i++) 
	{
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) 
		{
            sumEven += numbers[i];
            countEven++;
        }
    }

    cout << "Array with index and values:" << endl;
    for (int i = 0; i < size; i++)
	{
        cout << "Index " << i << ": " << numbers[i] << endl;
    }
	cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Total even numbers: " << countEven << endl;

    return 0;
}
/*output:
Enter 10 numbers: 12
4
5
6
3
2
1
0
7
8
Array with index and values:
Index 0: 12
Index 1: 4
Index 2: 5
Index 3: 6
Index 4: 3
Index 5: 2
Index 6: 1
Index 7: 0
Index 8: 7
Index 9: 8
Sum of even numbers: 32
Total even numbers: 6

*/
