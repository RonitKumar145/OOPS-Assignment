//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class MyClass {
private:
    int secretCode;

public:
    MyClass() : secretCode(999) {}

    // Declare FriendClass as a friend
    friend class FriendClass;
};

class FriendClass {
public:
    void displaySecret(MyClass& obj) {
        // Can access private members of MyClass
        cout << "The secret code is: " << obj.secretCode << endl;
    }
};

int main() {
    MyClass myObj;
    FriendClass friendObj;

    friendObj.displaySecret(myObj);

    return 0;
}
