#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    float marks;

    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "\nRoll No: " << roll;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main()
{
    Student s[3];

    cout << "\nEnter details of Student 1\n";
    s[0].getData();

    cout << "\nEnter details of Student 2\n";
    s[1].getData();

    cout << "\nEnter details of Student 3\n";
    s[2].getData();

    cout << "\nStudent 1 Details";
    s[0].displayData();

    cout << "\nStudent 2 Details";
    s[1].displayData();

    cout << "\nStudent 3 Details";
    s[2].displayData();

    return 0;
}