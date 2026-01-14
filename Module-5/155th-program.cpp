//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Available indices: 0-4" << endl;
    cout << "Enter index to access: ";
    cin >> index;

    try {
        if (index < 0 || index >= 5) {
            throw "Array Out of Bounds Exception!";
        }
        cout << "Value at index " << index << ": " << array[index] << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
