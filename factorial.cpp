#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    long long factorial=1;
    cout<<"Enter a number:";
    cin>>n;
    while(i<=n)
    {
        factorial=factorial*i;
        i++;
    }
    cout<<"factorial of"<<n<<"is"<< factorial;
    return 0;
}