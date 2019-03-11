#include <iostream>
#include "arithmetic.h"
#include "menu.h"

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
    int operandA, operandB;          // operands for arithmetic conversions
    char arithFunc;                  // operator for arithmetic conversions
    int result;                      // result of arithmetic conversions

    do {
        Arithmetic_SM();

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
    } while( arithFunc != '+' && arithFunc != '-' && arithFunc != '*' && arithFunc != '/' && arithFunc != '%' );
    cout << "The answer is: " << result << endl << endl;
}
