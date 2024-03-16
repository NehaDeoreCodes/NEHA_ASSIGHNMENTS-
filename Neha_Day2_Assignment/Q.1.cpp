/*1. Write a program which print odd series and even series up to n
odd series 1..3...5.................n
even series 2..4...............n*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Odd Series: ";
    for (int i = 1; i <= n; i++) {
        cout << (2 * i - 1);
        if (i < n) {
            cout << "...";
        }
    }
    cout << "\n";
    cout << "Even Series: ";
    for (int i = 1; i <= n; i++) {
        cout << (2 * i);
        if (i < n) {
            cout << "...";
        }
    }
    cout << "\n";

    return 0;
}
/*output:
Enter the value of n: 5
Odd Series: 1...3...5...7...9
Even Series: 2...4...6...8...10*/
