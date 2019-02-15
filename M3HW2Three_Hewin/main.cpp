/*****************************************************************************/
/* James Austin Hewin */
/* CSC-134 */
/* February 14, 2019 */
/* This program prints the area of a rectangle */
/*****************************************************************************/
#include <iostream>
/*****************************************************************************/
using namespace std;
/*****************************************************************************/
/*
 * printArea() method
 * calculates the area of a rectangle and displays to console
 *
 * @param length       length of rectangle
 * @param width        width of rectangle
 */
 void printArea(float length, float width);
 /*****************************************************************************/
int main()
{
    float len = 0.0f;                // length of rectangle
    float wid = 0.0f;                // width of rectangle

    /* gather input from user */
    cout << "Enter the length of the rectangle: ";
    cin >> len;
    cout << "Enter the width of the rectangle: ";
    cin >> wid;

    printArea(len, wid);          // call function to calculate area
/*****************************************************************************/
    return 0;
}
/*****************************************************************************/
void printArea(float length, float width)
{
    cout << endl << "A rectangle with length " << length << " and width " << width;
    cout << " has an area of " << (length * width) << endl << endl;
}
