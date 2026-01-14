//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    // Constructor with no arguments
    Complex() {
        real = 0;
        imag = 0;
    }

    // Constructor with one argument
    Complex(float value) {
        real = value;
        imag = value;
    }

    // Constructor with two arguments
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;         // Invokes 1st constructor
    Complex c2(5.5);    // Invokes 2nd constructor
    Complex c3(3.2, 4.5); // Invokes 3rd constructor

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c3 = "; c3.display();

    return 0;
}
