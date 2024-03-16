/*7.
Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard.*/
#include <iostream>
using namespace std;

class Area 
{
private:
    float length;
    float breadth;
public:
    
    Area(float len, float brd)
    {
    	length=len;
		breadth=brd;
	}
    float returnArea() 
	{
        return length * breadth;
    }
};

int main() 
{
    float len, brd;

    cout << "Enter length of the rectangle: ";
    cin >> len;
    cout << "Enter breadth of the rectangle: ";
    cin >> brd;

    Area rectangle(len, brd);
    cout << "Area of the rectangle: " << rectangle.returnArea() << endl;

    return 0;
}
/*output:
Enter length of the rectangle: 20
Enter breadth of the rectangle: 8
Area of the rectangle: 160*/