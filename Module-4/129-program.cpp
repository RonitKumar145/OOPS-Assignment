//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("data.txt");
    string s; int c=0;
    while(f >> s) c++;
    cout << "Words: " << c << endl;
    return 0;
}
