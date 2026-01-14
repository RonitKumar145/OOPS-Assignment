//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <new>
using namespace std;

int main() {
    int *dataPointer;
    try {
        long long size = 1000000000000;
        dataPointer = new int[size]; // Trying to allocate too much memory
        cout << "Allocation successful" << endl;
        delete[] dataPointer;
    }
    catch (bad_alloc& ba) {
        cout << "bad_alloc caught: " << ba.what() << endl;
    }
    return 0;
}
