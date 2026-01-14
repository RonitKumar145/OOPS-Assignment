//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Item {
public:
    string name;
    double price;
    int quantity;

    void setItem(string n, double p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    double totalCost() {
        return price * quantity;
    }
};

class Bill {
    Item items[10];
    int itemCount;

public:
    Bill() { itemCount = 0; }

    void addItem(string n, double p, int q) {
        if (itemCount < 10) {
            items[itemCount].setItem(n, p, q);
            itemCount++;
        }
    }

    void generateBill() {
        double grandTotal = 0;
        cout << "\n--- Customer Bill ---" << endl;
        cout << "Item\tPrice\tQty\tTotal" << endl;
        for (int i = 0; i < itemCount; i++) {
            double cost = items[i].totalCost();
            cout << items[i].name << "\t" << items[i].price << "\t" << items[i].quantity << "\t" << cost << endl;
            grandTotal += cost;
        }
        cout << "-----------------------" << endl;
        cout << "Grand Total: " << grandTotal << endl;
    }
};

int main() {
    Bill myBill;
    myBill.addItem("Apple", 20.0, 5);
    myBill.addItem("Milk", 50.0, 2);
    myBill.addItem("Bread", 40.0, 1);

    myBill.generateBill();

    return 0;
}
