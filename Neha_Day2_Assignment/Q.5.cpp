/*5. Write a program scan 10 numbers and calculate odd number and even number sum sepreatly.*/

#include <iostream>
using namespace std;
int main() {
     int numCount = 10;
    int numbers[numCount];
    int oddSum = 0, evenSum = 0;

   cout << "Enter 10 numbers:\n";

    for (int i = 0; i < numCount; ++i) {
        cin >> numbers[i];
    }

    
    for (int i = 0; i < numCount; ++i) {
        if (numbers[i] % 2 == 0) {
            evenSum += numbers[i];
        } else {
            oddSum += numbers[i];
        }
    }

  
    cout << "\nSum of even numbers: " << evenSum ;
    cout << "\nSum of odd numbers: " << oddSum;

    return 0;
}
/*Output:
Enter 10 numbers, pressing Enter after each:
Number 1: 6
Number 2: 8
Number 3: 2
Number 4: 4
Number 5: 7
Number 6: 3
Number 7: 1
Number 8: 0
Number 9: 6
Number 10: 9

Sum of even numbers: 26
Sum of odd numbers: 20
*/