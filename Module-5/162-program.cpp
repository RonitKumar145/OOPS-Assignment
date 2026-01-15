//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    try {
        ifstream f("none.txt");
        if(!f) throw "File Error";
    } catch(const char* m) { cout << m << endl; }
    return 0;
}
