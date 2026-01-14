//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age (0-100): ";
    
    try {
        if (!(cin >> age)) {
            throw "Invalid Input! Not a number.";
        }
        if (age < 0 || age > 100) {
            throw "Age out of valid range (0-100).";
        }
        cout << "Valid age entered: " << age << endl;
    }
    catch (const char* msg) {
        cout << "Input Error: " << msg << endl;
    }
    return 0;
}
