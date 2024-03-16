/*22. Write a program which print all prime numbers
between 1  to 100 using function.*/

#include<iostream>
using namespace std;

int primeNo(int num) 
{
    if (num <= 1)
        return 0; 
    for (int i = 2; i * i <= num; i++) 
	{
        if (num % i == 0)
            return 0; 
    }
    return 1; 
}
void prime_no()
{
    cout << "Prime numbers between 1 and 100 are:" << endl;
    for (int i = 2; i <= 100; i++) 
	{
        if (primeNo(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    
    prime_no();

    return 0;
}

/*output:
Prime numbers between 1 and 100 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97*/
