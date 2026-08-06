#include <iostream>
using namespace std;

namespace Krutika
{
    int add(int,int);
    int sub(int,int);
    int mul(int,int);
    float div(int,int);
}
int main()
{
    int a,b;

    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Addition="<<Krutika::add(a,b)
    <<endl;
    cout<<"Substraction="<<Krutika::sub(a,b)
    <<endl;
    cout<<"Product="<<Krutika::mul(a,b)
    <<endl;
    cout<<"Division="<<Krutika::div(a,b)
    <<endl;
    
    return 0;
}
