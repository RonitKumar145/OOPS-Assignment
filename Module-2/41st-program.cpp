//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// Class definition
class Car {
public:
    string brand;
    string model;
    int year;
};

int main() {
    // Create an object of Car
    Car myCarObj1;
    myCarObj1.brand = "Toyota";
    myCarObj1.model = "Corolla";
    myCarObj1.year = 2020;

    // Create another object of Car
    Car myCarObj2;
    myCarObj2.brand = "Ford";
    myCarObj2.model = "Mustang";
    myCarObj2.year = 1969;

    // Print attribute values
    cout << "Car 1: " << myCarObj1.brand << " " << myCarObj1.model << " " << myCarObj1.year << "\n";
    cout << "Car 2: " << myCarObj2.brand << " " << myCarObj2.model << " " << myCarObj2.year << "\n";

    return 0;
}
