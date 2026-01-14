//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>  
using namespace std;

int main() {
    int number;

    // enter an integer
    cout << "Enter an integer: ";
    cin >> number;

    // if–else 
    if (number % 2 == 0) {
        //  executes when the condition is true
        cout << "The number is EVEN." << endl;
    } else {
        //  executes when the condition is false
        cout << "The number is ODD." << endl;
    }

    return 0; 
}