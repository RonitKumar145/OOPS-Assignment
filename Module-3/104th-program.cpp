//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Document {
public:
    virtual void print() {
        cout << "Printing generic document" << endl;
    }
};

class PDF : public Document {
public:
    void print() {
        cout << "Printing PDF document" << endl;
    }
};

class Word : public Document {
public:
    void print() {
        cout << "Printing Word document" << endl;
    }
};

int main() {
    Document* doc;
    int choice;

    cout << "1. PDF\n2. Word\nEnter choice: ";
    cin >> choice;

    if (choice == 1)
        doc = new PDF();
    else
        doc = new Word();

    // Dynamic Dispatch: Decision made at runtime
    doc->print();

    return 0;
}
