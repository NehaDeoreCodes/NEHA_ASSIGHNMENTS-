/*23. Write a program scan string and replace alternate character
by $ sign. using function*/

#include <iostream>
#include <cstring>
using namespace std;

void replace(char str[])
 {
    int length = strlen(str);
    for (int i = 0; i < length; i++) 
	{
        if (i % 2 == 1) 
		{
            str[i] = '$';
        }
    }
}

int main()
{
    int max= 100;
    char str[max];

    cout << "Enter a string: ";
    cin.getline(str,max);

    replace(str);

    cout << "After replacing alternate characters with '$': " << str << endl;

    return 0;
}

/*
output:
Enter a string: Neha Deore
After replacing alternate characters with '$': N$h$ $e$r$*/
