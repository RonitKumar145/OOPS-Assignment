//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void vehicleInfo() {
        cout << "I am a vehicle." << endl;
    }
};

// Derived class from Vehicle
class Car : public Vehicle {
public:
    void carInfo() {
        cout << "I am a Car." << endl;
    }
};

// Derived class from Vehicle
class Racing {
public:
    void racingInfo() {
        cout << "I am a Racing Object." << endl;
    }
};

// Hybrid Inheritance: Inherits from Car and Racing
class Ferrari : public Car, public Racing {
public:
    void ferrariInfo() {
        cout << "I am a Ferrari." << endl;
    }
};

int main() {
    Ferrari f;

    f.vehicleInfo(); // From Vehicle (via Car)
    f.carInfo();     // From Car
    f.racingInfo();  // From Racing
    f.ferrariInfo(); // From Ferrari

    return 0;
}
