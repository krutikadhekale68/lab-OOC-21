#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float computerNetwork, discreteMathematicalSystem, webMining;
    float total, percentage;

public:

    void inputDetails()
    {
        cout << "Enter Student Name: ";
        getline(cin >> ws, name);

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Computer Network Marks: ";
        cin >> computerNetwork;

        cout << "Enter Discrete Mathematical System Marks: ";
        cin >> discreteMathematicalSystem;

        cout << "Enter Web Mining Marks: ";
        cin >> webMining;
    }

    char getGrade(float marks)
    {
        if (marks >= 90)
            return 'A';
        else if (marks >= 75)
            return 'B';
        else if (marks >= 60)
            return 'C';
        else if (marks >= 40)
            return 'D';
        else
            return 'F';
    }

    string getResult(float marks)
    {
        if (marks >= 40)
            return "PASS";
        else
            return "FAIL";
    }

    void calculate()
    {
        total = computerNetwork + discreteMathematicalSystem + webMining;
        percentage = total / 3;
    }

    void displayDetails()
    {
        cout << "\n\n";
        cout << "==============================================================\n";
        cout << "                    STUDENT MARKSHEET                         \n";
        cout << "==============================================================\n";

        cout << "Student Name : " << name << endl;
        cout << "Roll Number  : " << rollNo << endl;

        cout << "--------------------------------------------------------------\n";
        cout << "Subject\t\t\t\tMarks\tGrade\tResult\n";
        cout << "--------------------------------------------------------------\n";

        cout << "Computer Network\t\t" << computerNetwork << "\t"
             << getGrade(computerNetwork) << "\t"
             << getResult(computerNetwork) << endl;

        cout << "Discrete Mathematical System\t" << discreteMathematicalSystem << "\t"
             << getGrade(discreteMathematicalSystem) << "\t"
             << getResult(discreteMathematicalSystem) << endl;

        cout << "Web Mining\t\t\t" << webMining << "\t"
             << getGrade(webMining) << "\t"
             << getResult(webMining) << endl;

        cout << "--------------------------------------------------------------\n";

        cout << "Total Marks    : " << total << " / 300" << endl;
        cout << "Percentage     : " << percentage << "%" << endl;

        if (computerNetwork >= 40 &&
            discreteMathematicalSystem >= 40 &&
            webMining >= 40)
        {
            cout << "Overall Result : PASS" << endl;
        }
        else
        {
            cout << "Overall Result : FAIL" << endl;
        }

        cout << "==============================================================\n";
    }
};

int main()
{
    Student s;

    s.inputDetails();
    s.calculate();
    s.displayDetails();

    return 0;
}