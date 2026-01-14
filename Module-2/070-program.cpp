//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Class2; // Forward declaration

class Class1 {
    int value1;

public:
    void input(int v) { value1 = v; }
    void display() { cout << "Class1 Value: " << value1 << endl; }
    friend void swapValues(Class1 &, Class2 &);
};

class Class2 {
    int value2;

public:
    void input(int v) { value2 = v; }
    void display() { cout << "Class2 Value: " << value2 << endl; }
    friend void swapValues(Class1 &, Class2 &);
};

void swapValues(Class1 &x, Class2 &y) {
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main() {
    Class1 c1;
    Class2 c2;

    c1.input(100);
    c2.input(200);

    cout << "Before Swapping:" << endl;
    c1.display();
    c2.display();

    swapValues(c1, c2);

    cout << "\nAfter Swapping:" << endl;
    c1.display();
    c2.display();

    return 0;
}
