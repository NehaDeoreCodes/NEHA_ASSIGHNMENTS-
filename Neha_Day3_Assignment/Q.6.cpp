/*6.
Write a program to print the area of a rectangle by creating a class named 'Area' having two
functions. First function named as 'setDim' takes the length and breadth of the rectangle as
parameters and the second function named as 'getArea' returns the area of the rectangle. Length and
breadth of the rectangle are entered through keyboard.
*/
#include <iostream>
using namespace std;

class Area 
{
private:
    float length;
    float breadth;
public:
    void setDim(float len, float brd)
	{
        length = len;
        breadth = brd;
    }

    float getArea() 
	{
        return length * breadth;
    }
};

int main()
{
    Area rectangle; 

    float len, brd;

    cout << "Enter length of the rectangle: ";
    cin >> len;
    cout << "Enter breadth of the rectangle: ";
    cin >> brd;
    
    rectangle.setDim(len, brd);

    cout << "Area of the rectangle: " << rectangle.getArea() << endl;

    return 0;
}
/*Enter length of the rectangle: 20
Enter breadth of the rectangle: 8
Area of the rectangle: 160*/
