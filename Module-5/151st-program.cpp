//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

void func3() {
    cout << "Inside func3: Before throwing." << endl;
    throw 100;
    cout << "Inside func3: This line is skipped." << endl;
}

void func2() {
    cout << "Inside func2: Before Calling func3." << endl;
    func3();
    cout << "Inside func2: This line is skipped." << endl;
}

void func1() {
    cout << "Inside func1: Before Calling func2." << endl;
    try {
        func2();
    } catch (int e) {
        cout << "Caught exception in func1: " << e << endl;
    }
    cout << "Inside func1: After catch block." << endl;
}

int main() {
    cout << "Main: Calling func1." << endl;
    func1();
    cout << "Main: Back in main." << endl;
    return 0;
}
