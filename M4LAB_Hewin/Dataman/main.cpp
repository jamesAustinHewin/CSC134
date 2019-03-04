/******************************************************************************
 * Name:         James Austin Hewin
 * Class:        CSC-134-0001
 * Project:      Dataman
 * Date:         March 3, 2019
 * Description:  This program performs different functions:
 *               1.  Arithmetic conversions
 *               2.  Temperature conversions
 *****************************************************************************/
#include <iostream>
#include "arithmetic.h"
#include "temperature.h"

using namespace std;
/*****************************************************************************/
int main()
{
    int option = 0;;                 // user chooses DATAMAN MAIN MENU option
    int operandA, operandB;          // operands for arithmetic conversions
    char arithFunc;                  // operator for arithmetic conversions
    int result;                      // result of arithmetic conversions
    double temperatureK;             // Kelvin temperature
    double temperatureC;             // Celsius temperature
    int option_temperature;          // user chooses Temperature SUB-MENU option
/*****************************************************************************/
    do {
        cout << "********************DATAMAN MAIN MENU********************" << endl;
        cout << "1.  Arithmetic" << endl;
        cout << "2.  Temperature Conversion" << endl;
        cout << "0.  Exit";
        cout << endl;

        cin >> option;

        switch(option) {
/*****************************************************************************/
            case 0:
                cout << "Goodbye!!!!" << endl << endl;
                break;
/*****************************************************************************/
            case 1:
                arithUI();
                cin >> operandA >> arithFunc >> operandB;

                switch(arithFunc) {
                    case '+':
                        result = add(operandA, operandB);
                        break;
                    case '-':
                        result = subtract(operandA, operandB);
                        break;
                    case '*':
                        result = multiply(operandA, operandB);
                        break;
                    case '/':
                        result = divide(operandA, operandB);
                        break;
                    case '%':
                        result = remainder(operandA, operandB);
                        break;
                    default:
                        result = 2147483647;   // MAX INTEGER
                        break;
                }
                cout << "The answer is: " << result << endl << endl;
                break;
/*****************************************************************************/
            case 2:
                tempUI();
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
                break;
/*****************************************************************************/
            default:
                cout << "Invalid option!!!" << endl << endl;
                break;
        }

    } while (option != 0);
/*****************************************************************************/

    return 0;
}
