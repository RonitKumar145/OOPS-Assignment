//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int elementCount;
    cout << "Enter the number of elements: ";
    cin >> elementCount;

    int numbers[100]; // Declare array of max size 100

    // Input loop to get array elements
    cout << "Enter " << elementCount << " elements:" << endl;
    for (int i = 0; i < elementCount; i++) {
        cin >> numbers[i];
    }

    // Output loop to display array elements
    cout << "The elements are: ";
    for (int i = 0; i < elementCount; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
