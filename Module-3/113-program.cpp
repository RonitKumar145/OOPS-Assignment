//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    bool isIssued;

public:
    Book() : bookID(0), title(""), author(""), isIssued(false) {}

    void addBook(int id, string t, string a) {
        bookID = id;
        title = t;
        author = a;
        isIssued = false;
    }

    void issueBook() {
        if (!isIssued) {
            isIssued = true;
            cout << "Book '" << title << "' issued successfully." << endl;
        } else {
            cout << "Book is already issued." << endl;
        }
    }

    void returnBook() {
        if (isIssued) {
            isIssued = false;
            cout << "Book '" << title << "' returned successfully." << endl;
        } else {
            cout << "Book was not issued." << endl;
        }
    }

    void display() {
        cout << "ID: " << bookID << ", Title: " << title << ", Author: " << author;
        cout << ", Status: " << (isIssued ? "Issued" : "Available") << endl;
    }
};

int main() {
    Book b1;
    b1.addBook(101, "C++ Programming", "Bjarne Stroustrup");

    b1.display();
    b1.issueBook();
    b1.display();
    b1.returnBook();
    b1.display();

    return 0;
}
