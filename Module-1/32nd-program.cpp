//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int elementCount;
    cout << "Enter number of elements: ";
    cin >> elementCount;

    int numbers[100]; // Fixed size array
    cout << "Enter the elements: ";
    for(int i = 0; i < elementCount; i++) {
        cin >> numbers[i];
    }

    // Initialize maxElement with the first element
    int maxElement = numbers[0];

    // Iterate through the array to find the largest element
    for(int i = 1; i < elementCount; i++) {
        if(numbers[i] > maxElement) {
            maxElement = numbers[i];
        }
    }

    cout << "Largest element is: " << maxElement << endl;

    return 0;
}
