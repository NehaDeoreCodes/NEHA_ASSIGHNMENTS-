/*17. Write a  menu driven program create menu as
	1. addition  (with return)
	2. subtraction (without return)
	3. multiplication(without return)*/
	
#include<iostream>
using namespace std;

		int addition(int a, int b)
		{
   		 	return a + b;
		}

		void subtraction(int a, int b)
		{
    		cout << "Subtraction result: " << (a - b) << endl;
		}

		void multiplication(int a, int b) 
		{
    		cout << "Multiplication result: " << (a * b) << endl;
		}

int main() 
{
    int choice;
    int num1, num2;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
            case 1:
                cout << "Enter two numbers to add: ";
                cin >> num1 >> num2;
                cout << "Addition result: " << addition(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers to subtract: ";
                cin >> num1 >> num2;
                subtraction(num1, num2);
                break;
            case 3:
                cout << "Enter two numbers to multiply: ";
                cin >> num1 >> num2;
                multiplication(num1, num2);
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);

    return 0;
}
/*Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Exit
Enter your choice: 1
Enter two numbers to add: 5
4
Addition result: 9

Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Exit
Enter your choice: 3
Enter two numbers to multiply: 5
6
Multiplication result: 30

Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Exit
Enter your choice: 4
Exiting program. Goodbye!*/
