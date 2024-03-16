/*3.
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with a function to print the area and perimeter.
*/

#include<iostream>
#include<cmath>
using namespace std;

class Triangle {
private:
    int side1, side2, side3;
public:
    void setSides(int s1, int s2, int s3) 
	{
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    int Peri() 
	{
        return side1 + side2 + side3;
    }

    int area()
	{
        int s = Peri() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    
    void printDetails() 
	{
        cout << "Perimeter: " << Peri() << " units" << endl;
        cout << "Area: " <<area() << " square units" << endl;
    }
};

int main() 
{
    
    Triangle triangle;
    triangle.setSides(3, 4, 5);
	triangle.printDetails();
}

/*output:
Perimeter: 12 units
Area: 6 square units*/
