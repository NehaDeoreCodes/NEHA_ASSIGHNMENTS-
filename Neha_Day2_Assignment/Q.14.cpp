/*13. Write a program scan array for 10 numbers which is combination
of positive and negative numbers
count total positive and negative*/

#include<iostream>
using namespace std;

int main()
 {
    int a[10];
    int positive=0,negative=0;

    cout<<"\nEnter 10 numbers: ";
    for(int i=0; i<10; i++) 
	{
        cin>>a[i];
        if(a[i]>0)
            positive++;
        else if(a[i]<0)
            negative++;
    }

    cout<<"\nTotal positive numbers: "<<positive<<endl;
    cout<<"Total negative numbers: "<<negative<<endl;

    return 0;
}
/*output:
Enter 10 numbers: -1
-2
-3
4
6
-9
-10
5
8
7

Total positive numbers: 5
Total negative numbers: 5*/
