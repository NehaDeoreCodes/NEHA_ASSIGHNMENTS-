//3. Write a program which loop start 1 and stop 100print alternate numbers 1  3  5 
 
#include <iostream>
using namespace std;
int main() 
{
    for (int i = 1; i <= 100; i += 2)
	 {
        cout<< i << " ";
    }

    return 0;
}
/*
output:
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45
 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99*/
