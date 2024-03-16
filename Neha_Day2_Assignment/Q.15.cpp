/*14. Write a program scan array for 10 numbers which is combination
of positive and negative numbers
replace all negative numbers by 0*/

#include<iostream>
using namespace std;

int main()
 {
    int a[10];

    cout<<"\nEnter 10 numbers : ";
    for(int i = 0; i < 10; i++)
	{
        cin >> a[i];
        if (a[i] < 0)
            a[i] = 0;
    }

    cout << "\nArray after replacing negative numbers with 0: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
OUTPUT:
Enter 10 numbers : 4
5
6
8
7
-5
-6
-2
-3
-8

Array after replacing negative numbers with 0: 4 5 6 8 7 0 0 0 0 0*/