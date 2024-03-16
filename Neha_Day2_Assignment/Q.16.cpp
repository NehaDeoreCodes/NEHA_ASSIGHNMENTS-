/*15. Write a program which store 1 to 5 squar inside the array.*/
#include<iostream>
using namespace std;

int main() 
	{
    	int squares[5];
    	for (int i = 0; i < 5; i++) {
       		 squares[i] = (i + 1) * (i + 1);
    }

    	cout <<"Squares of numbers from 1 to 5: ";
    	for(int i = 0;i < 5;i++)
		 {
       		 cout<<squares[i]<< " ";
   		 }
    		cout<<endl;

    return 0;
}
/*Squares of numbers from 1 to 5: 1 4 9 16 25*/
