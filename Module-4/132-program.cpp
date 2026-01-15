//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <fstream>
using namespace std;

class Student {
public: 
    string name; int age;
    void put() { ofstream f("s.txt"); f<<name<<" "<<age; f.close(); }
};

int main() {
    Student s; s.name="Ronit"; s.age=20;
    s.put();
    cout << "Saved\n";
    return 0;
}
