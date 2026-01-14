//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Person {
public:
    virtual void introduce() {
        cout << "I am a Person." << endl;
    }
};

class Student : public Person {
public:
    void introduce() {
        cout << "I am a Student." << endl;
    }
};

class Teacher : public Person {
public:
    void introduce() {
        cout << "I am a Teacher." << endl;
    }
};

int main() {
    // Array of pointers to base class
    Person* people[3];

    people[0] = new Person();
    people[1] = new Student();
    people[2] = new Teacher();

    cout << "Polymorphic Array iteration:" << endl;
    for (int i = 0; i < 3; i++) {
        people[i]->introduce();
    }

    return 0;
}
