/*8. Write a program scan 3 numbers and calcualte the sum of digit*/
#include <iostream>
using namespace std;

int main() {
    int num, number, sum = 0;

    cout << "Enter three numbers: ";
    for (int i = 0; i < 3; ++i)
	 {
        cin >> number;
		num=number;
        while (num != 0) {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }

        cout << "Sum of digits for number " << number << ": " << sum << endl;
    }

    return 0;
}
/*
output:
Enter three numbers: 3
Sum of digits for number 3: 3
6
Sum of digits for number 6: 9
6
Sum of digits for number 6: 15*/

