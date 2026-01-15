//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int elementCount;
    cout << "Enter number of elements (at least 2): ";
    cin >> elementCount;

    if (elementCount < 2) {
        cout << "Invalid Input: Need at least 2 elements." << endl;
        return 0;
    }

    int numbers[100];
    cout << "Enter the elements: ";
    for(int i = 0; i < elementCount; i++) {
        cin >> numbers[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < elementCount; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }
    }
    
    if (secondLargest == INT_MIN) {
        cout << "No second largest element found (all elements might be equal)." << endl;
    } else {
        cout << "Second largest element: " << secondLargest << endl;
    }

    return 0;
}
