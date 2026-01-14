//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string name;
    int stockQuantity;
    double price;

public:
    void addProduct(int id, string n, int qty, double p) {
        productID = id;
        name = n;
        stockQuantity = qty;
        price = p;
    }

    void updateStock(int qty) {
        stockQuantity += qty;
        cout << "Stock updated. New Quantity: " << stockQuantity << endl;
    }

    void displayProduct() {
        cout << "ID: " << productID << " | Name: " << name << " | Stock: " << stockQuantity << " | Price: $" << price << endl;
    }
};

int main() {
    Product p1;
    p1.addProduct(101, "Laptop", 10, 55000.0);

    p1.displayProduct();
    
    // Adding more stock
    p1.updateStock(5);
    
    // Selling stock (reducing quantity)
    p1.updateStock(-2);

    p1.displayProduct();

    return 0;
}
