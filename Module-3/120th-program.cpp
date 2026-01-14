//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class LifeCycle {
    int id;

public:
    // Constructor
    LifeCycle(int i) {
        id = i;
        cout << "Object " << id << " Created (Constructor)" << endl;
    }

    void work() {
        cout << "Object " << id << " is working..." << endl;
    }

    // Destructor
    ~LifeCycle() {
        cout << "Object " << id << " Destroyed (Destructor)" << endl;
    }
};

int main() {
    cout << "Entering main..." << endl;

    LifeCycle obj1(1);
    obj1.work();

    {
        cout << "\nEntering block..." << endl;
        LifeCycle obj2(2);
        obj2.work();
        cout << "Exiting block..." << endl;
    } // obj2 destroyed here

    cout << "\nExiting main..." << endl;
    return 0;
} // obj1 destroyed here
