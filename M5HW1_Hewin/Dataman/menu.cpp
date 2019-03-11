#include <iostream>
#include "menu.h"

using namespace std;

void Dataman_MM(void)
{
    cout << "********************DATAMAN MAIN MENU********************" << endl;
    cout << "0.  Exit" << endl;
    cout << "1.  Arithmetic" << endl;
    cout << "2.  Temperature Conversion" << endl << endl;
}
void Arithmetic_SM(void)
{
    cout << "--------------------Arithmetic Sub-Menu--------------------" << endl;
    cout << "Please choose the arithmetic operation to perform by typing:" << endl;
    cout << "<operandA> + <operandB> for ADDITION" << endl;
    cout << "<operandA> - <operandB> for SUBTRACTION" << endl;
    cout << "<operandA> * <operandB> for MULTIPLICATION" << endl;
    cout << "<operandA> / <operandB> for DIVISION" << endl;
    cout << "<operandA> % <operandB> for MODULUS" << endl << endl;
}
void Temperature_SM()
{
    cout << "--------------------Temperature Sub-Menu--------------------" << endl;
    cout << "Please choose the temperature conversion to perform:" << endl;
    cout << "1.  Celsius to Kelvin" << endl;
    cout << "2.  Kelvin to Celsius" << endl << endl;
}
