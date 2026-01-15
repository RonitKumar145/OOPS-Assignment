//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <exception>
using namespace std;

class MyEx : public exception {
public: const char* what() const throw() { return "My Error"; }
};

int main() {
    try { throw MyEx(); }
    catch(MyEx& e) { cout << e.what() << endl; }
    return 0;
}
