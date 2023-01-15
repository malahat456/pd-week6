#include <iostream>
using namespace std;
main()

{
    string arrival;
    int examTimeHours;
    int examTimeMinutes;
    int arrivalTimeHours;
    int arrivalTimeMinutes;
    string result;
    int remainingTime;
    int result1;
    int result2;
    int lateTime;
    int earlyTime;
    int hours;
    int minutes;
    cout << "Enter the exam time(h):";
    cin >> examTimeHours;
    cout << "Enter the exam time (m):";
    cin >> examTimeMinutes;
    cout << "student hours of arrival:";
    cin >> arrivalTimeHours;
    cout << "student minutes of arrival:";
    cin >> arrivalTimeMinutes;
    result1 = (examTimeHours)*60 + examTimeMinutes;
    result2 = (arrivalTimeHours)*60 + arrivalTimeMinutes;
    if (result2 > result1)
    {
        lateTime = result2 - result1;
        hours = lateTime / 60;
        minutes = lateTime - ((60) * hours);
        if (hours == 0)
        {
            cout << "late " << endl;
            cout << minutes << " minutes after the start";
        }
        else
        {
            cout << "late " << endl;
            cout << hours << " : " << minutes << " hours after the start";
        }
    }
    if (result2 == result1)
    {
        cout << "On time" << endl;
    }
    minutes = result1 - result2;
    if (result2 < result1 && minutes <= 30)
    {
        cout << "On time" << endl;
        cout << minutes << " minutes before the start";
    }
    minutes = result1 - result2;
    if (result2 < result1 && minutes > 30)
    {

        if (minutes > 30)
        {
            cout << "Early " << endl;
        }
        earlyTime = (result1 - result2);
        hours = (earlyTime / 60);
        minutes = (earlyTime - (60) * hours);
        if (hours == 0)
        {
            cout << minutes << " minutes before the start";
        }
        else
        {
            cout << hours << " : " << minutes << " hours before the start";
        }
    }
}