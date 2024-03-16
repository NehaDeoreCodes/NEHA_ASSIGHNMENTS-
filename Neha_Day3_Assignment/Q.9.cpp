/*9.
Print the sum, difference and product of two complex numbers by creating a class named 'Complex'
with separate functions for each operation whose real and imaginary parts are entered by the user.*/

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    void setComplex(float r, float i) 
	{
        real = r;
        imag = i;
    }

    void addComplex(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void subtractComplex(Complex c1, Complex c2) {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }

    void multiplyComplex(Complex c1, Complex c2) {
        real = c1.real * c2.real - c1.imag * c2.imag;
        imag = c1.real * c2.imag + c1.imag * c2.real;
    }

    void displayComplex() {
        if (imag < 0)
            cout << "Complex number: " << real << " - " << -imag << "i" << endl;
        else
            cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex num1, num2, result;

    float real1, imag1, real2, imag2;

    cout << "Enter real and imaginary number: ";
    cin >> real1 >> imag1;
    num1.setComplex(real1, imag1);

    cout << "Enter real and imaginary number: ";
    cin >> real2 >> imag2;
    num2.setComplex(real2, imag2);

    result.addComplex(num1, num2);
    cout << "\nSum of the two complex numbers: ";
    result.displayComplex();

    result.subtractComplex(num1, num2);
    cout << "\nDifference of the two complex numbers: ";
    result.displayComplex();

   
    result.multiplyComplex(num1, num2);
    cout << "\nProduct of the two complex numbers: ";
    result.displayComplex();

    return 0;
}
/*OUTPUT:
Enter real and imaginary number: 3
2
Enter real and imaginary number: 6
5

Sum of the two complex numbers: Complex number: 9 + 7i

Difference of the two complex numbers: Complex number: -3 - 3i

Product of the two complex numbers: Complex number: 8 + 27i
*/
