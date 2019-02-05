// James Austin Hewin
// M3T1_Hewin
// 02/05/2019
/*****************************************************************************/
#include <iostream>

using namespace std;

bool validateInput(float numTests);
/*****************************************************************************/
int main()
{

    float testGrade = 0.0f;         /* individual test grade */
    float numTests = 0.0f;          /* total number of tests */
    float avgTestGrade = 0.0f;      /* average test grade */
    float runningTotal = 0.0f;      /* running total of all test grades */

    int i = 0;                      /* counter for loops */
/*****************************************************************************/

    cout << "********************FOR LOOP VERSION********************" << endl;
    do {
        cout << "Enter the number of tests to average: ";
        cin >> numTests;
    } while (!validateInput(numTests));

    for(i = 0; i < numTests; i++) {
        cout << "Enter test grade #" << i + 1 << ": ";   /* i + 1 starts numbering at 1 */
        cin >> testGrade;
        runningTotal += testGrade;
    }
    avgTestGrade = runningTotal / numTests;

    cout << "The average test grade is: " << avgTestGrade << endl << endl;
/*****************************************************************************/
    /* reset variables */
    i = 0;
    runningTotal = 0.0f;
    avgTestGrade = 0.0f;
/*****************************************************************************/

    cout << "********************WHILE LOOP VERSION********************" << endl;
    do {
        cout << "Enter the number of tests to average: ";
        cin >> numTests;
    } while (!validateInput(numTests));

    while(i < numTests) {
        cout << "Enter test grade #" << i + 1 << ": ";   /* i + 1 starts numbering at 1 */
        cin >> testGrade;
        runningTotal += testGrade;
        i++;
    }
    avgTestGrade = runningTotal / numTests;

    cout << "The average test grade is: " << avgTestGrade << endl << endl;
/*****************************************************************************/
    return 0;
}
bool validateInput(float numTests)
{
    return (numTests >= 1);
}
