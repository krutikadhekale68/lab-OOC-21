#include <iostream>
using namespace std;
int main()
{
    int a,b,ch;

    cout<<"Enter first number:";
    cin >> a;
    cout<<"Enter second number:";
    cin >> b;
    cout<<"\nMenu\n";
    cout<<"1.Addition\n";
    cout<<"2.Substraction\n";
    cout<<"3.Multiplication\n";
    cout<<"4.Divisiono\n";
    cout<<"5.Modulo\n";
    cout <<"Enter your choice:";
    cin >> ch;
    switch(ch)
    {
        case 1:
        cout<<"Addition="<<a+b;
        break;
        case 2:cout<<"Substraction="<<a-b;
        break;
        case 3:cout<<"Multiplication="<<a*b;
        break;
        case 4:cout<<"Division="<<a/b;
        break;
        case 5:cout<<"Modulo="<<a%b;
        break;
        default:
        cout<<"Invalid Choice";
    }
    return 0;
}
    

    

