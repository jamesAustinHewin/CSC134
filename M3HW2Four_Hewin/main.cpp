/*****************************************************************************/
/* James Austin Hewin */
/* CSC-134 */
/* February 15, 2019 */
/* This program calculates and prints the area of a rectangle */
/*****************************************************************************/
#include <iostream>
/*****************************************************************************/
using namespace std;
/*****************************************************************************/
/*
 * calcArea() method
 * calculates the area of a rectangle and returns the result
 *
 * @param length       length of rectangle
 * @param width        width of rectangle
 *
 * @return             area of rectangle
 */
 float calcArea(float length, float width);
 /*****************************************************************************/
int main()
{
    float len = 0.0f;                // length of rectangle
    float wid = 0.0f;                // width of rectangle
    float area = 0.0f;               // area of rectangle

    /* gather input from user */
    cout << "Enter the length of the rectangle: ";
    cin >> len;
    cout << "Enter the width of the rectangle: ";
    cin >> wid;

    area = calcArea(len, wid);          // call function to calculate area

    /* display to console */
    cout << endl << "A rectangle with length " << len << " and width " << wid;
    cout << " has an area of " << area << endl << endl;
/*****************************************************************************/
    return 0;
}
/*****************************************************************************/
float calcArea(float length, float width)
{
    return (length * width);
}
