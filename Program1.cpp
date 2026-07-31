#include<iostream>
using namespace std;
int main()
{
    int*arr;
    int size;
    cout<<"Enter the size of integer array:";
    cin>>size;
    cout<<"Creating an array of size "<<size<<"..";
    arr = new int[size];
    cout <<"\nDyanamic allocation of memory for arry arr is successful.";
    int sum = 0;
    cout <<"Enter" << size << "number:\n";
    for(int i= 0;i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout <<"The sum of the entered numbers is:"<< sum << "\n";


    delete arr;
    return 0;
}