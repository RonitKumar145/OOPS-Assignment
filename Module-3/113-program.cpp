//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Book {
    int id;
    bool avail;
public:
    Book(int i) : id(i), avail(true) {}
    void issue() { 
        if(avail) { avail=false; cout<<"Issued\n"; } 
        else cout<<"Taken\n"; 
    }
    void ret() { avail=true; cout<<"Returned\n"; }
};

int main() {
    Book b(101);
    b.issue();
    b.issue();
    b.ret();
    return 0;
}
