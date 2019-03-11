/******************************************************************************
 * Name:         James Austin Hewin
 * Class:        CSC-134-0001
 * Project:      Dataman
 * Date:         March 3, 2019
 * Description:  This program performs different functions:
 *               1.  Arithmetic conversions
 *               2.  Temperature conversions
 *****************************************************************************/
#include <iostream>
#include "arithmetic.h"
#include "temperature.h"
#include "menu.h"

using namespace std;
/*****************************************************************************/
int main()
{
    int option = 0;;                 // user chooses DATAMAN MAIN MENU option
/*****************************************************************************/
    do {
        Dataman_MM();

        cin >> option;

        switch(option) {
/*****************************************************************************/
            case 0:
                cout << "Goodbye!!!!" << endl << endl;
                break;
/*****************************************************************************/
            case 1:
                arithUI();
                break;
/*****************************************************************************/
            case 2:
                tempUI();
                break;
/*****************************************************************************/
            default:
                cout << "Invalid option!!!" << endl << endl;
                break;
        }

    } while (option != 0);
/*****************************************************************************/

    return 0;
}
