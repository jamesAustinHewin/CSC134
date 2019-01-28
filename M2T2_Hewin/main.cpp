/*****************************************************************************/
// James Austin Hewin
// CSC-134
// M2T2_Hewin
// 01/27/2019
/*****************************************************************************/
#include <iostream>

using namespace std;
/*****************************************************************************/
int main()
{
/*****************************************************************************/
    /** Listing IfElse */
    cout << "\"Listing IfElse Output\"" << endl;// print output header
    int i;                                      // declare int variable i
    cout << "Type any number: ";                // prompt user for input
    cin >> i;                                   // store value from user in i

    if(i > 10) {
        cout << "It's greater than 10." << endl << endl;  // print result (i > 10)
    }
    else {
        cout << "It's not greater than 10." << endl << endl;   // print result (i <= 10)
    }
/*****************************************************************************/
    /** Listing IfElse2 */
    cout << "\"Listing IfElse2 Output\"" << endl;// print output header
    cout << "Type any number: ";                // prompt user for input
    cin >> i;                                   // store value from user in i

    if(i > 10) {
        cout << "It's greater than 10." << endl << endl;  // print result (i > 10)
    }
    else if (i == 10) {
        cout << "It's equal to 10." << endl << endl;  // print result (i == 10)
    }
    else {
        cout << "It's less than 10." << endl << endl;   // print result (i < 10)
    }
/*****************************************************************************/
    /** Listing IfElse3 */
    cout << "\"Listing IfElse3 Output\"" << endl;// print output header
    cout << "Type any number: ";                // prompt user for input
    cin >> i;                                   // store value from user in i

    if(i > 100) {
        cout << "It's greater than 100." << endl << endl;  // print result (i > 100)
    }
    else if (i > 10) {
        cout << "It's greater than 10." << endl << endl;  // print result (i > 10)
    }
    else {
        cout << "It's neither greater than 100 nor greater than 10." << endl << endl;   // print result (i <= 10)
    }
/*****************************************************************************/
    /** Listing ForLoop */
    cout << "\"Listing ForLoop Output\"" << endl;// print output header
    int x = 0;                                   // declare int variable x and initialize

    for(i = 1; i <= 100; i++) {                  // execute loop 100x
        x += i;                                  // add x value to i value and store in x
    }

    cout << x << endl << endl;                   // print x variable value
/*****************************************************************************/
    /** Listing ForCountdown */
    cout << "\"Listing ForCountdown Output\"" << endl;// print output header

    for(i = 10; i >= 5; i--) {                  // execute loop 6x
        cout << i << endl;                      // print i value, 10 downto 5
    }
    cout << endl;                               // print blank line
/*****************************************************************************/
    /** Listing ForLoop2 */
    cout << "\"Listing ForLoop2 Output\"" << endl;// print output header
    double y = 0.0;                               // declare double variable y and initialize
    double j;                                     // declare double variable j

    for(j = 0.0; j <= 100; j += 0.1) {            // execute loop 1001x
        y += j;                                   // add y value to j value and store in y
    }

    cout << y << endl << endl;                    // print y variable value
/*****************************************************************************/
    /** Listing WhileLoop */
    cout << "\"Listing WhileLoop Output\"" << endl;// print output header
    i = 0;                                         // change i value

    while(i <= 10) {                               // execute loop 11x
        cout << i << endl;                         // print i value
        i++;                                       // increment i
    }

    cout << "All Finished!" << endl << endl;       // print message
/*****************************************************************************/
    /** Listing DoWhileLoop */
    cout << "\"Listing DoWhileLoop Output\"" << endl;// print output header
    i = 0;                                         // change i value

    do {                                           // execute loop first time
        cout << i << endl;                         // print i value
        i++;                                       // increment i
    }
    while(i <= 10);                                // execute loop 10x more

    cout << "All Finished!" << endl << endl;       // print message
/*****************************************************************************/
    return 0;
}
