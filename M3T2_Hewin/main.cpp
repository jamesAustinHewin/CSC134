// James Austin Hewin
// M3T2_Hewin
// 02/07/2019
/*****************************************************************************/
#include <iostream>

/* minimum work hours */
#define MIN_WORK_HOURS 30
/* maximum work hours */
#define MAX_WORK_HOURS 40

using namespace std;
/*****************************************************************************/
/*
 * validateInput() function
 * validates that hourly pay rate > $0.00 per hour
 * @param payPerHour       hourly pay rate
 * @return                 true - rate > 0.00; false - rate <= 0.0
 */
bool validateInput(float payPerHour);
/*****************************************************************************/
/*
 * CalcGrossPayForLoop() function
 * calculates gross pay for work between 30 hours and 40 hours (for loop)
 */
void CalcGrossPayForLoop(void);
/*****************************************************************************/
/*
 * CalcGrossPayWhileLoop() function
 * calculates gross pay for work between 30 hours and 40 hours (while loop)
 */
void CalcGrossPayWhileLoop(void);
/*****************************************************************************/
int main()
{
    CalcGrossPayForLoop();
    cout << endl << endl;
    CalcGrossPayWhileLoop();

    return 0;
}
/*****************************************************************************/
bool validateInput(float payPerHour)
{
    return (payPerHour > 0.00);
}
/*****************************************************************************/
void CalcGrossPayForLoop()
{
    int i = MIN_WORK_HOURS;
    float payPerHour = 0.0f;

    cout << "********************FOR LOOP VERSION********************" << endl;
    do {
        cout << "Enter the hourly pay rate: ";
        cin >> payPerHour;
    } while (!validateInput(payPerHour));

    cout << "Hour\t\t" << "Amount($)" << endl;
    for(i = MIN_WORK_HOURS; i <= MAX_WORK_HOURS; i++) {
        cout << i << "\t\t" << i * payPerHour << endl;
    }
}
/*****************************************************************************/
void CalcGrossPayWhileLoop()
{
    int i = MIN_WORK_HOURS;
    float payPerHour = 0.0f;

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
}
/*****************************************************************************/
