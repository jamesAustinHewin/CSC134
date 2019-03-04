#ifndef ARITHMETIC_H_INCLUDED
#define ARITHMETIC_H_INCLUDED

/**
 * add
 * Adds two integers
 *
 * @param operandA        first operand
 * @param operandB        second operand
 * @return                sum of both operands
 */
int add(int operandA, int operandB);

/**
 * subtract
 * Subtracts two integers
 *
 * @param operandA        first operand
 * @param operandB        second operand
 * @return                difference of both operands
 */
int subtract(int operandA, int operandB);

/**
 * multiply
 * Multiplies two integers
 *
 * @param operandA        first operand
 * @param operandB        second operand
 * @return                product of both operands
 */
int multiply(int operandA, int operandB);

/**
 * divide
 * Divides two integers
 *
 * @param operandA        first operand
 * @param operandB        second operand
 * @return                quotient of both operands
 */
int divide(int operandA, int operandB);

/**
 * remainder
 * Modulus of two integers
 *
 * @param operandA        first operand
 * @param operandB        second operand
 * @return                modulus of both operands
 */
int remainder(int operandA, int operandB);

/**
 * arithUI
 * Displays menu for arithmetic conversions
 */
void arithUI(void);

#endif // ARITHMETIC_H_INCLUDED
