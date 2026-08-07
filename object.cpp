#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    char name[30];
    float marks;

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "\nRoll Number : " << rollNo;
        cout << "\nName        : " << name;
        cout << "\nMarks       : " << marks << endl;
    }
};

int main()
{
    Student s[3];   // Array of 3 objects

    cout << "Enter details of 3 students:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].getData();
    }

    cout << "\n----- Student Details -----\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].displayData();
    }

    return 0;
}