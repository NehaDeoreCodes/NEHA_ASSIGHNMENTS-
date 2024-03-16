/*10.
Write a program to print the volume of a box by creating a class named 'Volume' with an
initialization list to initialize its length, breadth and height. (just to make you familiar with
initialization lists)*/

#include <iostream>
using namespace std;
class Volume 
{
private:
    float length;
    float breadth;
    float height;
public:
    
    Volume(float len, float brd, float h) : length(len), breadth(brd), height(h) {}

    float calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    float len, brd, h;

    cout << "Enter length of the box: ";
    cin >> len;
    cout << "Enter breadth of the box: ";
    cin >> brd;
    cout << "Enter height of the box: ";
    cin >> h;

    Volume box(len, brd, h);
    cout << "Volume of the box: " << box.calculateVolume() << endl;

    return 0;
}
/*OUTPUT:
Enter length of the box: 20
Enter breadth of the box: 40
Enter height of the box: 30
Volume of the box: 24000*/

