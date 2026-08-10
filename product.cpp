#include <iostream>
using namespace std;

class Product
{
    int productId;
    string productName;
    int quantity;
    float price;

public:

    void inputDetails()
    {
        cout << "Enter Product ID: ";
        cin >> productId;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void displayDetails()
    {
        cout << "\n----- Product Details -----" << endl;
        cout << "Product ID   : " << productId << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Quantity     : " << quantity << endl;
        cout << "Price        : " << price << endl;
    }

    void billing()
    {
        float total;
        total = quantity * price;

        cout << "Total Bill   : " << total << endl;
    }
};

int main()
{
    Product p;

    p.inputDetails();
    p.displayDetails();
    p.billing();

    return 0;
}