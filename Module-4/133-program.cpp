//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("test.txt");
    string s;
    while(!f.eof()) {
        f >> s;
        if(f) cout << s << " ";
    }
    return 0;
}
