//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Parent {};
class Child : public Parent {};

int main() {
    try { throw Child(); }
    catch(Child) { cout << "Caught Child\n"; }
    catch(Parent) { cout << "Caught Parent\n"; }
    return 0;
}
