//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class DynamicArray {
private:
    int *arr;
    int size;

public:
    // Constructor allocates memory dynamically
    DynamicArray(int s) {
        size = s;
        arr = new int[size]; // Dynamic allocation
        cout << "Memory allocated for array of size " << size << endl;
    }

    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
    }

    int getValue(int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        return -1;
    }

    // Destructor frees the memory
    ~DynamicArray() {
        delete[] arr; // Release memory
        cout << "Memory released." << endl;
    }
};

int main() {
    DynamicArray da(5);
    
    da.setValue(0, 10);
    da.setValue(1, 20);
    
    cout << "Value at index 0: " << da.getValue(0) << endl;
    cout << "Value at index 1: " << da.getValue(1) << endl;

    return 0;
}
