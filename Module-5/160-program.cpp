//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class BaseException {};
class DerivedException : public BaseException {};

int main() {
    try {
        throw DerivedException();
    }
    // Order matters: Derived catch must come before Base catch
    catch (DerivedException d) {
        cout << "Caught Derived Exception" << endl;
    }
    catch (BaseException b) {
        cout << "Caught Base Exception" << endl;
    }
    return 0;
}
