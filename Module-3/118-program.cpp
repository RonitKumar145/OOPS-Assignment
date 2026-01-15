//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Teacher {
public:
    string name;
    Teacher(string n) : name(n) {}
};

class Dept {
    Teacher* t;
public:
    Dept(Teacher* tr) : t(tr) {}
    void show() { cout << "Dept has " << t->name << endl; }
};

int main() {
    Teacher t("Ronit");
    Dept d(&t);
    d.show();
    return 0;
}
