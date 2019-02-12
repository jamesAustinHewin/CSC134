/*****************************************************************************/
// James Austin Hewin
// M3HW1_Hewin
// 02/12/2019
/*****************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;
/*****************************************************************************/
/**
 * AddOne() function
 * Increments actual parameter passed to it by value and returns new value
 *
 * @param     start        number to increment
 * @return                 number after being incremented by 1
 */
int AddOne(int start)
{
    int newnumber;
    newnumber = start + 1;
    return newnumber;
}
/*****************************************************************************/
/**
 * main() function
 *
 * @return                exit status of program
 */
int main()
{
/*****************************************************************************/
    /** Listing 5-1:  Seeing a Function in Action */
    cout << "Listing 5-1:  Seeing a Function in Action" << endl;

    cout << fabs(-10.5) << endl;       // computing absolute value of number
    cout << fabs(10.5)  << endl << endl;
/*****************************************************************************/
    /** Listing 5-2:  Seeing Another Function in Action */
    cout << "Listing 5-2:  Seeing Another Function in Action" << endl;

    double mynumber;
    mynumber = fabs(-23.87);       // computing absolute value of number

    cout << mynumber << endl << endl;
/*****************************************************************************/
    /** Listing 5-3:  Seeing Yet Another Function in Action */
    cout << "Listing 5-3:  Seeing Yet Another Function in Action" << endl;

    double start;
    double finish;

    start = -253.895;
    finish = fabs(start);       // computing absolute value of number

    cout << finish << endl << endl;
/*****************************************************************************/
    /** Listing 5-4:  Seeing Yet One More Function in Action */
    cout << "Listing 5-4:  Seeing Yet One More Function in Action" << endl;

    double number = 10.0;
    double exponent = 3.0;

    cout << pow(number, exponent) << endl << endl;  // computing exponential of number (x^y)
/*****************************************************************************/
    /** Listing 5-5:  Writing Your Very Own Function */
    cout << "Listing 5-5:  Writing Your Very Own Function" << endl;

    int testnumber;
    int result;

    testnumber = 20;
    result = AddOne(testnumber);         // call function to increment testnumber

    cout << result << endl << endl;
/*****************************************************************************/
    return 0;
}
