//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

// This program conceptually demonstrates stream hierarchy usage
// ios -> istream/ostream -> iostream -> fstream

int main() {
    // 'cout' is an object of ostream class
    ostream &out = cout;
    out << "This is using ostream reference to cout." << endl;
    
    // 'cin' is an object of istream class
    istream &in = cin;
    int x;
    
    // Demonstrating standard stream objects
    out << "Enter a number: ";
    if (in >> x) {
        out << "You entered: " << x << endl;
    }
    
    out << "\nStream Hierarchy Summary:" << endl;
    out << "1. ios_base: Root class (formatting flags)" << endl;
    out << "2. ios: Derived from ios_base (streambuf pointer)" << endl;
    out << "3. istream/ostream: Derived from ios" << endl;
    out << "4. iostream: Multiple inheritance from istream & ostream" << endl;
    out << "5. fstream: Derived from iostream for files" << endl;

    return 0;
}
