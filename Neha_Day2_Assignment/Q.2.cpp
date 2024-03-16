/*2. Write a program which print square of 1 to 5 number

1*1=1
2*2=4*/
#include <iostream>
using namespace std;

int main() 
{
    for (int a = 1; a <= 5; ++a)
	 {
        
        int square = a * a;
        cout << a << "*" << a << "=" << square << endl;
    }

    return 0;
}
/*output:
1*1=1
2*2=4
3*3=9
4*4=16
5*5=25*/
