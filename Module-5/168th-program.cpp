//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <exception>
#include <vector>
using namespace std;

class StackException : public exception {
    string msg;
public:
    StackException(string m) : msg(m) {}
    ~StackException() throw() {}
    const char* what() const throw() { return msg.c_str(); }
};

class Stack {
    vector<int> data;
public:
    void push(int val) {
        data.push_back(val);
    }
    void pop() {
        if (data.empty()) throw StackException("Stack Underflow!");
        data.pop_back();
    }
    int top() {
        if (data.empty()) throw StackException("Stack is Empty!");
        return data.back();
    }
};

int main() {
    Stack s;
    try {
        s.pop(); // Will throw exception
    }
    catch (StackException& e) {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}
