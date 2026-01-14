//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Product {
public:
    string name;
    double price;

    Product() {}
    Product(string n, double p) : name(n), price(p) {}
};

class ShoppingCart {
    Product items[10];
    int count;

public:
    ShoppingCart() { count = 0; }

    void addToCart(Product p) {
        if (count < 10) {
            items[count++] = p;
            cout << p.name << " added to cart." << endl;
        } else {
            cout << "Cart is full!" << endl;
        }
    }

    void displayCart() {
        double total = 0;
        cout << "\n--- Shopping Cart ---" << endl;
        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". " << items[i].name << " - $" << items[i].price << endl;
            total += items[i].price;
        }
        cout << "Total Amount: $" << total << endl;
    }
};

int main() {
    ShoppingCart cart;
    
    Product p1("Shoes", 2000);
    Product p2("T-Shirt", 500);
    Product p3("Watch", 1500);

    cart.addToCart(p1);
    cart.addToCart(p2);
    cart.addToCart(p3);

    cart.displayCart();

    return 0;
}
