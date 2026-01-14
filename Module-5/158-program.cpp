//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <new> // Required for bad_alloc
using namespace std;

int main() {
    try {
        // Attempt to allocate extremely large memory block to trigger failure
        long long size = 100000000000; 
        int *ptr = new int[size];
        cout << "Memory successfully allocated." << endl;
        delete[] ptr;
    }
    catch (bad_alloc& e) {
        cout << "Allocation failed: " << e.what() << endl;
    }
    return 0;
}
