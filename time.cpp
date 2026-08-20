#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes, seconds;

public:
    Time(int h = 0, int m = 0, int s = 0)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    Time add(const Time &t)
    {
        int s = seconds + t.seconds;
        int m = minutes + t.minutes;
        int h = hours + t.hours;

        if (s >= 60)
        {
            s -= 60;
            m++;
        }

        if (m >= 60)
        {
            m -= 60;
            h++;
        }

        return Time(h, m, s);
    }

    Time subtract(const Time &t)
    {
        int s = seconds - t.seconds;
        int m = minutes - t.minutes;
        int h = hours - t.hours;

        if (s < 0)
        {
            s += 60;
            m--;
        }

        if (m < 0)
        {
            m += 60;
            h--;
        }

        return Time(h, m, s);
    }

    void display() const
    {
        cout << hours << " hours "
             << minutes << " minutes "
             << seconds << " seconds" << endl;
    }
};

int main()
{
    Time t1(5, 45, 30);
    Time t2(2, 30, 45);

    Time sum = t1.add(t2);
    Time diff = t1.subtract(t2);

    cout << "First Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}