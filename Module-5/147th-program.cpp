//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age; // Throwing integer exception
        }
        cout << "Access granted." << endl;
    }
    catch (int num) {
        cout << "Access denied - Age is: " << num << "\nMinimum 18 required." << endl;
    }
    return 0;
}
