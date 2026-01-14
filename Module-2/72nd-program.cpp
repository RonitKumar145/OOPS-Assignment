//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class MathUtils {
public:
    // Static member function
    // Can be called without creating an object
    static int add(int a, int b) {
        return a + b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    // Calling static functions using class name
    int sum = MathUtils::add(10, 20);
    int product = MathUtils::multiply(5, 4);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}
