//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int bal = 500, w = 1000;
    try {
        if(w > bal) throw "Low Bal";
        bal -= w;
    } catch(const char* m) { cout << m << endl; }
    return 0;
}
