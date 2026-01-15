//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <new>
using namespace std;

int main() {
    try {
        int* p = new int[1000000000000];
    } catch(bad_alloc) { cout << "Mem Fail\n"; }
    return 0;
}
