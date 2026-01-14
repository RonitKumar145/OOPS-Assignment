//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Calculator {
public:
    // Function Overloading: Same name, different parameters
    
    // 1. Add two integers
    int add(int a, int b) {
        return a + b;
    }

    // 2. Add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // 3. Add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    
    cout << "Add 2 ints: " << calc.add(10, 20) << endl;
    cout << "Add 3 ints: " << calc.add(10, 20, 30) << endl;
    cout << "Add 2 doubles: " << calc.add(5.5, 4.2) << endl;

    return 0;
}
