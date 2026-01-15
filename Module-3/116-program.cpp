//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Store {
    int stock = 0;
public:
    void add(int n) { stock += n; }
    void show() { cout << "Stock: " << stock << endl; }
};

int main() {
    Store s;
    s.add(10);
    s.add(5);
    s.show();
    return 0;
}
