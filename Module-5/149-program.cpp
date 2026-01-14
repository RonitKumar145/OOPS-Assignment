//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

void test(int x) {
    try {
        if (x == 1) throw x;
        else if (x == 0) throw 'A';
        else if (x == -1) throw 1.5;
    }
    catch (int i) {
        cout << "Caught Integer: " << i << endl;
    }
    catch (char c) {
        cout << "Caught Character: " << c << endl;
    }
    catch (double d) {
        cout << "Caught Double: " << d << endl;
    }
}

int main() {
    cout << "-- Testing with 1 --" << endl;
    test(1);
    cout << "-- Testing with 0 --" << endl;
    test(0);
    cout << "-- Testing with -1 --" << endl;
    test(-1);
    return 0;
}
