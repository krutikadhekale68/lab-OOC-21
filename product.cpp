#include <iostream>
using namespace std;

class Product
{
    int productid;
    string productName;
    int quantity;
    float price;
    
public:
void inputDetails()
{
    cout<<"Enter Product ID:";
    cin>>productid;

    cout<<"Enter Product Name:";
    cin>>productName;

    cout<<"Enter Quantity:";
    cin>>quantity;

    cout<<"Enter Price:";
    cin>>price;
}
void displayDetails()
{
    cout<<"\n-----ProductDetails-----"<<
    endl;
    cout<<"Product ID:"<<productid<<endl;

    cout<<"Product Name:"<<product Name:"<<productName<<endl;
    cout<<"Quantity :"<<quantity<<
    endl;
    cout<<"Price :"<<price<<endl;
}
    void billing()
    {
    float total;
    total=quantity*price;

    cout<<"Total Bill :"<<total<<endl;
    }
};
int main(){
Product p;
p.inputDetails();
p.displyDetails();
p.billing();

return 0;
}