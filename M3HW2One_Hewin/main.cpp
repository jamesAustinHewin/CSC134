/*****************************************************************************/
// CSC-134
// James Austin Hewin
// M3HW2One_Hewin
// 02/14/2019
/*****************************************************************************/
#include <iostream>
#include <cmath>
/*****************************************************************************/
/** Sentinel Value of -1 to Quit program */
#define SENTINEL_VALUE -1
/** 16.9 ounces in a single water bottle */
#define OZ_PER_BOTTLE 16.9
/*****************************************************************************/
using namespace std;
/*****************************************************************************/
int main()
{
    double ouncesDispensed = 0.0;   /* number of ounces of water dispensed */
    double runningTotal = 0.0;      /* total number of ounces of water dispensed */
    int numWaterBottlesSaved = 0;   /* number of water bottles saved */

    do {
        cout << "Enter the number of ounces dispensed from water fountain (-1 to Quit): ";
        cin >> ouncesDispensed;

        (ouncesDispensed != SENTINEL_VALUE) ? runningTotal += ouncesDispensed : runningTotal += 0 ;
    } while(ouncesDispensed != SENTINEL_VALUE);

    numWaterBottlesSaved = floor(runningTotal / OZ_PER_BOTTLE);
    cout << numWaterBottlesSaved << " water bottles saved" << endl;
/*****************************************************************************/
    return 0;
}
