//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Count {
private:
    int value;

public:
    Count() : value(5) {}

    // Overloading unary ++ operator
    void operator++() {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count c;
    cout << "Before overloading:" << endl;
    c.display();

    ++c; // Calls the operator function

    cout << "After overloading (++c):" << endl;
    c.display();

    return 0;
}
