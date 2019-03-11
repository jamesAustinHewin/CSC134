#include <iostream>
#include "temperature.h"
#include "menu.h"

using namespace std;

double tempKToC(double kelvin)
{
    return kelvin - (double)TEMP_CONV_FACTOR;
}
double tempCToK(double celsius)
{
    return celsius + (double)TEMP_CONV_FACTOR;
}
double tempFToC(double fahrenheit)
{
    return (fahrenheit - 32.0) / (5.0 / 9.0);
}
double tempCToF(double celsius)
{
   return celsius * 9.0 / 5.0 + 32.0;
}
void tempUI(void)
{
    double temperatureK;             // Kelvin temperature
    double temperatureC;             // Celsius temperature
    int option_temperature;          // user chooses Temperature SUB-MENU option

    Temperature_SM();

    cin >> option_temperature;

    switch(option_temperature) {

        case 1:
            cout << "Please enter the temperature in Celsius: ";
            cin >> temperatureC;
            temperatureK = tempCToK(temperatureC);
            break;
        case 2:
            cout << "Please enter the temperature in Kelvin: ";
            cin >> temperatureK;
            temperatureC = tempKToC(temperatureK);
            break;
        default:
            temperatureC = temperatureK = -1000000;
            break;
        }
        cout << "Celsius Temperature\n" << temperatureC << endl << endl;
        cout << "Kelvin Temperature\n" << temperatureK << endl << endl;
}
