#include <iostream>
#include "arithmetic.h"

using namespace std;

int add(int operandA, int operandB)
{
    return operandA + operandB;
}
int subtract(int operandA, int operandB)
{
    return operandA - operandB;
}
int multiply(int operandA, int operandB)
{
    return operandA * operandB;
}
int divide(int operandA, int operandB)
{
    return operandA / operandB;
}
int remainder(int operandA, int operandB)
{
    return operandA % operandB;
}
void arithUI(void)
{
    cout << "--------------------Arithmetic Sub-Menu--------------------" << endl;
    cout << "Please choose the arithmetic operation to perform by typing:" << endl;
    cout << "<operandA> + <operandB> for ADDITION" << endl;
    cout << "<operandA> - <operandB> for SUBTRACTION" << endl;
    cout << "<operandA> * <operandB> for MULTIPLICATION" << endl;
    cout << "<operandA> / <operandB> for DIVISION" << endl;
    cout << "<operandA> % <operandB> for MODULUS" << endl << endl;
}
