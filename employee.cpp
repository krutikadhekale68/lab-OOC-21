#include<iostream>
using namespace std;

class Employee
{
    int id;
    string name,branch;
    float basicSalary,grossSalary;

    public:
    void getinputDetails()
    {
        cout<<"Enter Employee ID:";
        cin>>id;

        cout<<"Enter Employee Name:";
        cin>>name;

        cout<<"Enter Branch:";
        cin>>branch;

        cout<<"Enter Basic Salary:";
        cin>>basicSalary;
    }
    void calculateGrossSalary()
    {
        float DA,HRA;
        DA=basicSalary*0.10;
        HRA=basicSalary*0.20;

        grossSalary=basicSalary+ DA+ HRA;
    }
    void displyDetails()
    {
        cout<<"\n-----Employee Details-----"
        <<endl;
        cout<<"Employee ID :"<<id<<endl;
        cout<<"Employee Name :"<<name
        <<endl;
        cout<<"Branch :"<<branch<<endl;
        cout<<"Basic Salary :"<<basicSalary<<endl;
        cout<<"Gross Salary :"<<grossSalary<<endl;
    }
};
int main()
{
    Employee e;
    e.getinputDetails();
    e.calculateGrossSalary();
    e.displyDetails();

    return 0;
}
