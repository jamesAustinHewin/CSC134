#include <iostream>
#include "temperature.h"

using namespace std;

const double TEMP_CONV_FACTOR = 273.15;

double tempKToC(double kelvin)
{
    return kelvin - TEMP_CONV_FACTOR;
}
double tempCToK(double celsius)
{
    return celsius + TEMP_CONV_FACTOR;
}
void tempUI(void)
{
    cout << "--------------------Temperature Sub-Menu--------------------" << endl;
    cout << "Please choose the temperature conversion to perform by selecting from the following options:" << endl;
    cout << "1.  Celsius to Kelvin" << endl;
    cout << "2.  Kelvin to Celsius" << endl << endl;
}
