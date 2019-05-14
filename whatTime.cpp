#include <iostream>

using namespace std;

void totime(int hours, int minute);
int main(void)
{
    int hours;
    int minutes;
    cout << "Enter the number of hours:";
    cin >> hours;
    cout << endl
         << "Enter the number of minutes:";
    cin >> minutes;
    cout << endl;
    totime(hours, minutes);
}

void totime(int hours, int minute)
{
    cout << hours << ':' << minute << endl;
}