//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("m.txt");
    ifstream f1("a.txt"), f2("b.txt");
    char c;
    while(f1.get(c)) f.put(c);
    while(f2.get(c)) f.put(c);
    cout << "Merged\n";
    return 0;
}
