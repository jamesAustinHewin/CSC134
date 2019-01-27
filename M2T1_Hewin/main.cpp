/*****************************************************************************/
// James Austin Hewin
// CSC-134
// M2T1_Hewin
// 01/27/2019
/*****************************************************************************/
#include <iostream>

using namespace std;
/*****************************************************************************/
int main()
{
/*****************************************************************************/
    /** Listing 3-1 */
    cout << "\"Listing 3-1 Output\"" << endl;   // print output header
    int mynumber;                               // declare int variable mynumber
    mynumber = 10;                              // initialize mynumber
    cout << mynumber << endl << endl;           // print value of mynumber
/*****************************************************************************/
    /** Listing 3-2 */
    cout << "\"Listing 3-2 Output\"" << endl;   // print output header
    mynumber = 20;                              // change value of mynumber
    cout << mynumber << endl << endl;           // print new value of mynumber
/*****************************************************************************/
    /** Listing 3-3 */
    cout << "\"Listing 3-3 Output\"" << endl;   // print output header
    int start = 50;                             // declare int variable start and initialize
    int finish;                                 // declare int variable finish
    finish = start;                             // copy start value to finish value
    cout << finish << endl << endl;             // print value of finish
/*****************************************************************************/
    /** Listing 3-4 */
    cout << "\"Listing 3-4 Output\"" << endl;   // print output header
    int final;                                  // declare int variable final
    int time;                                   // declare int variable time
    final = 28;                                 // initialize final
    time = 18;                                  // initialize time
    cout << final - time << endl << endl;       // print difference of final, time
/*****************************************************************************/
    /** Listing 3-5 */
    cout << "\"Listing 3-5 Output\"" << endl;   // print output header
    int first, second;                          // declare int variables first, second
    cout << "Dividing 28 by 14." << endl;       // print info header
    first = 28;                                 // initialize first
    second = 14;                                // initialize second
    cout << "Quotient " << first / second << endl;    // print quotient of first, second
    cout << "Remainder " << first % second << endl;   // print remainder of first, second

    cout << "Dividing 32 by 6." << endl;        // print info header
    first = 32;                                 // change value of first
    second = 6;                                 // change value second
    cout << "Quotient " << first / second << endl;    // print new quotient of first, second
    cout << "Remainder " << first % second << endl << endl;   // print new remainder of first, second
/*****************************************************************************/
    /** Listing 3-6 */
    cout << "\"Listing 3-6 Output\"" << endl;   // print output header
    string mystring;                            // declare string variable mystring
    mystring = "abcdef";                        // initialize mystring
    cout << mystring[2] << endl << endl;        // print 3rd char of mystring
/*****************************************************************************/
    /** Listing 3-7 */
    cout << "\"Listing 3-7 Output\"" << endl;   // print output header
    mystring = "Hello there";                   // change mystring
    cout << mystring << endl << endl;           // print mystring
/*****************************************************************************/
    /** Listing 3-8 */
    cout << "\"Listing 3-8 Output\"" << endl;   // print output header
    first = 10;                                 // change value of first
    second = 20;                                // change value of second
    string result;                              // declare string variable result
    result = first == second ? "equal" : "not equal";   // compare first, second
    cout << result << endl << endl;             // print value of result
/*****************************************************************************/
    /** Listing 3-9 */
    cout << "\"Listing 3-9 Output\"" << endl;   // print output header
    string name;                                // declare string variable name
    cout << "Type your name: ";                 // prompt user for name
    cin >> name;                                // assign value to name
    cout << "Your name is " << name << endl << endl;   // print value of name
/*****************************************************************************/
    return 0;
}
