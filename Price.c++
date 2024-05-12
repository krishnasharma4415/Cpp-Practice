// Program to input and display item details using operator overloading >>
#include <iostream>
#include <string>
using namespace std;
class Item
{
public:
    string name;
    double price;
    int quantity;

    Item() : name(""), price(0.0), quantity(0) {}

    Item(const string &itemName, double itemPrice, int itemQuantity) : name(itemName), price(itemPrice), quantity(itemQuantity) {}

    friend istream &operator>>(istream &input, Item &item)
    {
        getline(input, item.name);
        input >> item.price;
        input >> item.quantity;
        return input;
    }

    void displayItemDetails() const
    {
        cout << "Item details:" << endl;
        cout << "Name: " << name << ", Price: $" << price << ", Quantity: " << quantity << endl;
    }
};

int main()
{
    Item item;

    cin >> item;

    item.displayItemDetails();
    return 0;
}