//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <string>
using namespace std;

class LoginException : public exception {
    string message;
public:
    LoginException(string msg) : message(msg) {}
    ~LoginException() throw() {}
    const char* what() const throw() { return message.c_str(); }
};

void login(string username, string password) {
    if (username != "admin") {
        throw LoginException("Invalid Username!");
    }
    if (password != "secret") {
        throw LoginException("Invalid Password!");
    }
    cout << "Login Successful!" << endl;
}

int main() {
    string username, password;
    cout << "Username: "; cin >> username;
    cout << "Password: "; cin >> password;

    try {
        login(username, password);
    }
    catch (LoginException& e) {
        cout << "Login Error: " << e.what() << endl;
    }
    return 0;
}
