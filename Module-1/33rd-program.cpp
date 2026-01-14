//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int elementCount;
    cout << "Enter number of elements (at least 2): ";
    cin >> elementCount;

    int numbers[100]; // Fixed size array
    cout << "Enter the elements: ";
    for(int i = 0; i < elementCount; i++) {
        cin >> numbers[i];
    }

    if (elementCount < 2) {
        cout << " Invalid Input ";
        return 0;
    }
    
    // sorting the array in ascending order to find second largest easily
    for(int i = 0; i < elementCount; i++)
    {        
        for(int j = i + 1; j < elementCount; j++)
        {
            if(numbers[i] > numbers[j])
            {
                // Swap elements
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    // The second largest element is at index elementCount-2 after sorting
    cout << "Second largest element: " << numbers[elementCount - 2];

    return 0;
}
