#include <iostream>
using namespace std;
int main() 
{
    float temperature;
    char unit;
    cout << "Enter a temperature value: ";
    cin >> temperature;
    cout << "Enter the original unit of measurement (C, F, or K): ";
    cin >> unit;

    float fahrenheit, kelvin, celcius;
    if (unit == 'C' | unit == 'c') 
    {
        fahrenheit = (9.0 / 5.0) * temperature + 32.0;
        kelvin = temperature + 273.15;
    } 
    else if (unit == 'F' | unit == 'f') 
    {
        celcius = (5.0 / 9.0) * (temperature - 32.0);
        kelvin = (5.0 / 9.0) * (temperature - 32.0) + 273.15;
    } 
    else if (unit == 'K' | unit == 'k') 
    {
        celcius = temperature - 273.15;
        fahrenheit = (9.0 / 5.0) * (temperature - 273.15) + 32.0;
    } 
    else 
    {
        cout << "Invalid unit of measurement." << endl;
        return 1;
    }

    cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;
    cout << "The temperature in Kelvin is: " << kelvin << endl;

    return 0;
}