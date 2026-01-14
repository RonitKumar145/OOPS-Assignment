//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    // Bitwise Operations
    cout << "Bitwise AND: " << (num1 & num2) << endl;
    cout << "Bitwise OR : " << (num1 | num2) << endl;
    cout << "Bitwise XOR : " << (num1 ^ num2) << endl;
    cout << "Bitwise NOT: " << (~num1) << endl;
    cout << "Bitwise LEFT SHIFT: " << (num1 << 1) << endl;
    cout << "Bitwise RIGHT SHIFT: " << (num1 >> 1) << endl;

    return 0;
}