//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

struct Term {
    int coeff;
    int exp;
};

class Polynomial {
    Term terms[10]; // Max 10 terms
    int count;

public:
    Polynomial() { count = 0; }

    void addTerm(int c, int e) {
        terms[count].coeff = c;
        terms[count].exp = e;
        count++;
    }

    void display() {
        for (int i = 0; i < count; i++) {
            cout << terms[i].coeff << "x^" << terms[i].exp;
            if (i != count - 1) cout << " + ";
        }
        cout << endl;
    }
};

int main() {
    Polynomial p;
    p.addTerm(3, 2); // 3x^2
    p.addTerm(5, 1); // 5x^1
    p.addTerm(2, 0); // 2x^0

    cout << "Polynomial: ";
    p.display();

    return 0;
}
