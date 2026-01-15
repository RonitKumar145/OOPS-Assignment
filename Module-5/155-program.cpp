//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5}, i;
    cin >> i;
    try {
        if(i<0 || i>=5) throw "Out of bounds";
        cout << arr[i];
    } catch(const char* m) { cout << m << endl; }
    return 0;
}
