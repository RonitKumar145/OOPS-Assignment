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

    // Logic to reverse the array
    int start = 0, end = elementCount - 1;
    while (start < end) {
        // Swap elements at start and end indices
        int temp = numbers[start];
        numbers[start] = numbers[end];
        numbers[end] = temp;
        
        // Move indices towards center
        start++;
        end--;
    }

    // Output the reversed array
    cout << "Reversed array: ";
    for(int i = 0; i < elementCount; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
