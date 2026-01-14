//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>   
using namespace std;

int main() {
    int a, b, c;
    // Input three numbers
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;

    // Nested if logic to find the largest number
    if (a >= b) {
        // executes if 'a' is greater than or equal to 'b'
        if (a >= c) {
            // executes if 'a' is also greater than or equal to 'c'
            cout << "The largest number is: " << a << endl;
        } else {
            // executes when 'c' is greater than 'a'
            cout << "The largest number is: " << c << endl;
        }
    } else {
        // executes when 'b' is greater than 'a'
        if (b >= c) {
            // Executes when 'b' is greater than or equal to 'c'
            cout << "The largest number is: " << b << endl;
        } else {
            // Executes when 'c' is greater than 'b'
            cout << "The largest number is: " << c << endl;
        }
    }

    return 0; 
}