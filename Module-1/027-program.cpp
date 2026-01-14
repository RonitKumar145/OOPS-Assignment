//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int num, i = 1;

    cout << "Enter a number to print its table: ";
    cin >> num;

    cout << "Table of " << num << ":" << endl;
    // loop continues as long as i is less than or equal to 10
    while (i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++; // increment i by 1
    }

    return 0;
}
