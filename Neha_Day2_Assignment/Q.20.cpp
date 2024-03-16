/*19. Write a program scan array and count total even number
using function.*/

#include<iostream>
using namespace std;

int SIZE = 10;

int countEvenNo(int arr[]) {
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int a[SIZE];

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> a[i];
    }

    int evenCount = countEvenNo(a);
    cout << "Total even numbers: " << evenCount << endl;

    return 0;
}
/*output:
Enter 10 numbers: 4
6
7
8
3
2
9
45
50
41
Total even numbers: 5*/
