//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int n=10, d=0;
    try {
        if(d==0) throw "Div by 0";
        cout << n/d;
    } catch(const char* m) { cout << m << endl; }
    return 0;
}
