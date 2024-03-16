/*5.
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by
creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and
breadth are passed as parameters to its constructor.*/
#include <iostream>
using namespace std;

class Rectangle 
{
private:
    float length;
    float breadth;
public:
    Rectangle(float len, float brd) 
		{
			length=len;
			breadth=brd;
	 	}

    float Area() 
	{
        return length * breadth;
    }
};

int main() 
{
    Rectangle rectangle1(4, 5);
    Rectangle rectangle2(5, 8);

   
    cout << "Area of Rectangle 1: " << rectangle1.Area() << endl;

    cout << "Area of Rectangle 2: " << rectangle2.Area() << endl;

    return 0;
}
/*Area of Rectangle 1: 20
Area of Rectangle 2: 40*/
