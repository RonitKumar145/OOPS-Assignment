//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <new>
using namespace std;

int main() {
    try {
        long long size = 1000000000000;
        int* p = new int[size];
    } catch(bad_alloc&) { cout << "No Mem\n"; }
    return 0;
}
