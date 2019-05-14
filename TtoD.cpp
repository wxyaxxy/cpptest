#include <iostream>

using namespace std;

int calculate(int Celsius);

int main(void)
{
    int Celsius;
    cout << "Please enter a Celsius value:";
    cin >> Celsius;
    int degrees = calculate(Celsius);
    cout << Celsius<<" degrees Celsius is "<<degrees<<" Fahrenheit."<<endl;
    return 0;
}

int calculate(int Celsius)
{
    return 1.8 * Celsius + 32.0;
}