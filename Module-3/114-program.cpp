//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Emp {
    double sal, all, ded;
public:
    void get() { cin >> sal >> all >> ded; }
    void show() { cout << "Net: " << (sal + all - ded) << endl; }
};

int main() {
    Emp e;
    cout << "Enter Sal, Allow, Ded: ";
    e.get();
    e.show();
    return 0;
}
