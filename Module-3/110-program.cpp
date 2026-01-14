//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

// Base Class
class Payment {
public:
    virtual void process() {
        cout << "Processing generic payment..." << endl;
    }
};

class CreditCard : public Payment {
public:
    void process() {
        cout << "Processing Credit Card payment..." << endl;
    }
};

class PayPal : public Payment {
public:
    void process() {
        cout << "Processing PayPal payment..." << endl;
    }
};

int main() {
    // Implication: Scalability
    // We can add new Payment types (e.g., Bitcoin) without changing this main logic
    
    Payment* p;
    
    cout << "User selects Credit Card:" << endl;
    p = new CreditCard();
    p->process();

    cout << "\nUser selects PayPal:" << endl;
    p = new PayPal();
    p->process();

    // The interface 'process()' remains consistent for all types
    return 0;
}
