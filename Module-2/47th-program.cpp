//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Largest {
    int num1, num2;

public:
    void input() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void findLargest() {
        if (num1 > num2) {
            cout << "Largest Number is: " << num1 << endl;
        } else if (num2 > num1) {
            cout << "Largest Number is: " << num2 << endl;
        } else {
            cout << "Both numbers are equal." << endl;
        }
    }
};

int main() {
    Largest obj;
    
    obj.input();
    obj.findLargest();

    return 0;
}
