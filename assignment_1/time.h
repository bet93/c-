#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes;

public:
    void settime(int h, int min)
    {
        hours = h;
        minutes = min;
    }

    void showtime()
    {
        cout << hours << " hrs and " << minutes << " mins" << endl;
    }

    Time sum(Time t)
    {
        Time temp;
        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;

        // convert min to hours format if > than 60
        while (temp.minutes > 60.0)
        {
            temp.minutes = temp.minutes - 60.0;
            temp.hours++;
        }
        // convert hours to 12 hours format if > than 12
        while (temp.hours > 12.0)
        {
            temp.hours = temp.hours - 12.0;
        }

        return temp;
    }
};