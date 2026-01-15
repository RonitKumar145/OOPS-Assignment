//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Bill {
    double total = 0;
public:
    void add(double p, int q) { total += p*q; }
    void show() { cout << "Total: " << total << endl; }
};

int main() {
    Bill b;
    b.add(10, 2);
    b.add(50, 1);
    b.show();
    return 0;
}
