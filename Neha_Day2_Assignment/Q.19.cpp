/*18. Write a program scan number and calculate factorial
using without return function*/

#include<iostream>
using namespace std;

void calculateFactorial(int num)
 {
     int fact = 1;

    for (int i = 1; i <= num; ++i)
	{
        fact *= i;
    }

    cout<<"Factorial of "<<num<<"="<<fact<<endl;
}

int main() 
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    
    calculateFactorial(number);

    return 0;
}
/*output:
Enter a number: 6
Factorial of 6=720*/
