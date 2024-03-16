/*8.
Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.
*/

#include <iostream>
using namespace std;

class Average {
public:
    
     static void calculate(float num1, float num2, float num3) 
	{
        float average = (num1 + num2 + num3) / 3;
        cout << "Average of the three numbers: " << average << endl;
    }
};

int main() 
{
    float num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    Average::calculate(num1, num2, num3);

    return 0;
}

/*OUTPUT:
Enter three numbers: 20
55
62
Average of the three numbers: 45.6667*/
