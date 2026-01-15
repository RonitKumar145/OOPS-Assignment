//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Obj {
    int id;
public:
    Obj(int i) : id(i) { cout << "Created " << id << endl; }
    ~Obj() { cout << "Destroyed " << id << endl; }
};

int main() {
    Obj o1(1);
    { Obj o2(2); }
    return 0;
}
