//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Student {
    int m[3];
public:
    void get() { for(int i=0; i<3; i++) cin >> m[i]; }
    void show() {
        int t = 0; 
        for(int i=0; i<3; i++) t += m[i];
        cout << "Total: " << t << " Grade: " << (t/3 >= 50 ? 'P' : 'F') << endl;
    }
};

int main() {
    Student s;
    cout << "Enter 3 marks: ";
    s.get();
    s.show();
    return 0;
}
