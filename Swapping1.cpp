#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Entr second number:";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nAfter swapping:"<<endl;
    cout<<"First number="<<b<<endl;
    return 0;
}