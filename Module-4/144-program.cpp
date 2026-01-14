//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num = 123.456789;
    
    cout << "Original: " << num << endl;
    
    // fixed: fixed-point notation
    // setprecision: number of digits after decimal
    cout << "Fixed, 2 decimal places: " << fixed << setprecision(2) << num << endl;
    
    // showpos: show + sign for positive numbers
    cout << "Show Positive Sign: " << showpos << 100 << endl;
    
    // noshowpos: revert effect
    cout << "No Show Positive Sign: " << noshowpos << 100 << endl;
    
    // setfill: fill character for setw padding
    cout << "Filled with *: " << setfill('*') << setw(10) << 99 << endl;
    
    // hex: hexadecimal output
    cout << "Hexadecimal of 255: " << hex << 255 << endl;

    return 0;
}
