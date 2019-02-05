// James Austin Hewin
// M3T2_Hewin
// 02/05/2019
/*****************************************************************************/
#include <iostream>

#define MIN_WORK_HOURS 30
#define MAX_WORK_HOURS 40

using namespace std;

bool validateInput(float payPerHour);
/*****************************************************************************/
int main()
{
    float payPerHour = 0.00;        /* amount of pay per hour */

    int i = 0;                      /* counter for loops */
/*****************************************************************************/

    cout << "********************FOR LOOP VERSION********************" << endl;
    do {
        cout << "Enter the hourly pay rate: ";
        cin >> payPerHour;
    } while (!validateInput(payPerHour));

    cout << "Hour\t\t" << "Amount($)" << endl;
    for(i = MIN_WORK_HOURS; i <= MAX_WORK_HOURS; i++) {
        cout << i << "\t\t" << i * payPerHour << endl;
    }
/*****************************************************************************/

    i = MIN_WORK_HOURS;
    cout << "********************WHILE LOOP VERSION********************" << endl;
    do {
        cout << "Enter the hourly pay rate: ";
        cin >> payPerHour;
    } while (!validateInput(payPerHour));

    cout << "Hour\t\t" << "Amount($)" << endl;

    while(i >= MIN_WORK_HOURS && i <= MAX_WORK_HOURS) {
        cout << i << "\t\t" << i * payPerHour << endl;
        i++;
    }
/*****************************************************************************/
    return 0;
}
bool validateInput(float payPerHour)
{
    return (payPerHour > 0.00);
}
