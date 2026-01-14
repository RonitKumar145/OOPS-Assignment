//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Throw exception type (1: int, 2: double, 3: char): ";
    cin >> choice;

    try {
        if (choice == 1) throw 10;
        else if (choice == 2) throw 20.5;
        else if (choice == 3) throw 'Z';
        else cout << "No exception thrown." << endl;
    }
    catch (int e) {
        cout << "Caught int: " << e << endl;
    }
    catch (double e) {
        cout << "Caught double: " << e << endl;
    }
    catch (char e) {
        cout << "Caught char: " << e << endl;
    }
    return 0;
}
