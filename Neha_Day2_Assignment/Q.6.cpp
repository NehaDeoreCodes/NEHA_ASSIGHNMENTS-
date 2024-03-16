/*6. Write a program scan 10 numbers which is a combination
of positive and negative numbers*/
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int no[num];
    int positiveSum = 0, negativeSum = 0;

    cout << "Enter 10 numbers:\n";

    for (int i = 0; i < num; ++i) {
        cin >> no[i];
        
       
        if (no[i] > 0) {
            positiveSum += no[i];
        } else if (no[i] < 0) {
            negativeSum += no[i];
        }
    }

    cout << "Sum of positive numbers: " << positiveSum << endl;
    cout << "Sum of negative numbers: " << negativeSum << endl;

    return 0;
}
/*output:
Enter 10 numbers:
-4
2
6
8
-7
-2
-0
2
6
5
Sum of positive numbers: 29
Sum of negative numbers: -13*/