//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Calculator {
public:
    int num1, num2;

    void input() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    void add() {
        cout << "Addition: " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Subtraction: " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Multiplication: " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Division: " << (float)num1 / num2 << endl;
        else
            cout << "Division by zero is not allowed!" << endl;
    }
};

int main() {
    Calculator calc;
    
    calc.input();
    
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();

    return 0;
}
