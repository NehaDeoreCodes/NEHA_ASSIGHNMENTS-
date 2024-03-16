/*16. Write a program scan two numbers and swap(Exchange)*/

#include<iostream>
using namespace std;

int main()
 {
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"\nEnter second number: ";
    cin>>num2;

    cout<<"\nBefore swapping: ";
    cout<<"\n1ST NO= "<<num1<<"\n2ND NO="<<num2<<endl;

    
    int temp = num1;
    num1=num2;
    num2=temp;

    cout<<"\nAfter swapping: ";
    cout<<"\n1ST NO="<<num1<<"\n2ND NO="<<num2<<endl;

    return 0;
}
/*output:
Enter first number: 45

Enter second number: 65

Before swapping:
1ST NO= 45
2ND NO=65

After swapping:
1ST NO=65
2ND NO=45*/