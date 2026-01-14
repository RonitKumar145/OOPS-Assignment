//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box() {
        width = 0;
    }

    void setWidth(int w) {
        width = w;
    }

    // Friend function declaration
    // This function can access private members of Box
    friend void printWidth(Box box);
};

// Friend function definition
// Note: It is not a member function of the class
void printWidth(Box box) {
    // Accessing private member 'width' directly
    cout << "Width of box: " << box.width << endl;
}

int main() {
    Box box;
    box.setWidth(10);
    
    // Call friend function
    printWidth(box);

    return 0;
}
