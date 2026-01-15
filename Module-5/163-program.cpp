//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    try {
        if(age < 0) throw "Invalid";
        cout << "Age: " << age;
    } catch(const char* m) { cout << m; }
    return 0;
}
