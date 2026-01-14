//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// Composition: Engine is PART OF Car. Without Car, Engine context is specific.
// If Car is destroyed, Engine is destroyed (typically).

class Engine {
public:
    void start() {
        cout << "Engine Started." << endl;
    }
    void stop() {
        cout << "Engine Stopped." << endl;
    }
};

class Car {
private:
    Engine engine; // Composition: Car HAS-A Engine

public:
    void startCar() {
        engine.start();
        cout << "Car is moving." << endl;
    }
    void stopCar() {
        engine.stop();
        cout << "Car has stopped." << endl;
    }
};

int main() {
    Car myCar;
    myCar.startCar();
    myCar.stopCar();

    return 0;
}
