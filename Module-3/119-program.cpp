//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Cart {
    double total = 0;
public:
    void add(double p) { total += p; cout << "Added " << p << endl; }
    void show() { cout << "Total: " << total << endl; }
};

int main() {
    Cart c;
    c.add(100);
    c.add(200);
    c.show();
    return 0;
}
