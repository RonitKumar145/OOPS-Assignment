//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    void getRoll(int r) {
        roll = r;
    }
};

// Virtual base class to prevent duplication of 'Student' in result
class Test : virtual public Student {
public:
    int part1, part2;
    void getMarks(int p1, int p2) {
        part1 = p1;
        part2 = p2;
    }
};

class Sports : virtual public Student {
public:
    int score;
    void getScore(int s) {
        score = s;
    }
};

class Result : public Test, public Sports {
    int total;
public:
    void display() {
        total = part1 + part2 + score;
        cout << "Roll No: " << roll << endl;
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result obj;
    obj.getRoll(100);
    obj.getMarks(80, 90);
    obj.getScore(70);
    obj.display();
    return 0;
}
