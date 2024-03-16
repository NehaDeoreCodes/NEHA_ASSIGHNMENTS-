/*7. Write a program scan number and print number of digits or places
Enter number 12
2 digit
123
3 places*/
#include <iostream>
using namespace std;

int main() {
    int number;

   
    cout << "Enter a number: ";
    cin >> number;

    int digitCount = 0;
    int tempNumber = number;

    while (tempNumber != 0) {
        tempNumber /= 10;
        ++digitCount;
    }
    cout << number << " has " << digitCount << " " << (digitCount == 1 ? "digit" : "digits") << endl;

    return 0;
}
/*OUTPUT:
Enter a number: 45621
45621 has 5 digits*/

