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

    void display() {
        cout << "Count: " << value << endl;
    }

    // Overloading unary minus (-) operator using friend function
    friend void operator-(Count &c);
};

void operator-(Count &c) {
    c.value = -c.value;
}

int main() {
    Count c1;
    cout << "Before overloading:" << endl;
    c1.display();

    -c1; // Activate operator overloading

    cout << "After overloading:" << endl;
    c1.display();

    return 0;
}
