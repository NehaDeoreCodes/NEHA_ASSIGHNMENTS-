/*12. Write a program scan 10 numbers for array print array with index and calculated sum of
 even numbers and total even numbers.*/

#include <iostream>
using namespace std;

int main() 
{
    int numbers[10];
    int even_sum = 0;
    int even_count = 0;

    cout<<"Enter 10 numbers:"<<endl;
    for(int i = 0; i < 10; ++i) 
	{
        cout<<"Enter number=";
        cin>>numbers[i];
    }

    cout<<"\nArray with index:"<<endl;
    for (int i = 0; i < 10; ++i)
	 {
        cout<<"Index="<<i<<":"<<numbers[i]<<endl;
        if (numbers[i] % 2 == 0) 
		{
            even_sum += numbers[i];
            even_count++;
        }
    }
    cout<<"\nSum of even numbers:"<<even_sum<<endl;
    cout<<"Total even numbers: " <<even_count<<endl;

    return 0;
}
/*OUTPUT:
Enter 10 numbers:
Enter number=7
Enter number=5
Enter number=6
Enter number=4
Enter number=2
Enter number=3
Enter number=8
Enter number=9
Enter number=1
Enter number=0

Array with index:
Index=0:7
Index=1:5
Index=2:6
Index=3:4
Index=4:2
Index=5:3
Index=6:8
Index=7:9
Index=8:1
Index=9:0

Sum of even numbers:20
Total even numbers: 5
*/
