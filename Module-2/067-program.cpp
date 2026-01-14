//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Friend function to add two Complex objects
    friend Complex sum(Complex, Complex);
};

Complex sum(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex num1, num2, result;

    cout << "For first complex number:" << endl;
    num1.input();

    cout << "For second complex number:" << endl;
    num2.input();

    result = sum(num1, num2);

    cout << "Sum = ";
    result.display();

    return 0;
}
