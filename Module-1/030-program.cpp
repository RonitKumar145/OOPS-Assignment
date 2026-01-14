//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a positive number: ";
    cin >> num;

    if (num < 0) {
        goto error_label; // Jump to the label 'error_label'
    }

    cout << "You entered: " << num << endl;
    return 0;

error_label: // label definition
    cout << "Error: Negative number entered!" << endl;
    return 1;
}
