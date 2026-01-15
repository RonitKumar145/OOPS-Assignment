//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("data.txt");
    string s;
    while(getline(f, s)) cout << s << endl;
    f.close();
    return 0;
}
