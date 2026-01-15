//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("data.txt");
    ofstream out("copy.txt");
    char c;
    while(in.get(c)) out.put(c);
    cout << "Copied\n";
    return 0;
}
