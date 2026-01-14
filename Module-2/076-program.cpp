//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
private:
    int items[SIZE], front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (front == 0 && rear == SIZE - 1) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1) front = 0;
            rear++;
            items[rear] = element;
            cout << "Inserted " << element << endl;
        }
    }

    int dequeue() {
        int element;
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            element = items[front];
            if (front >= rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }
            cout << "Deleted " << element << endl;
            return element;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.dequeue();
    q.dequeue();

    return 0;
}
