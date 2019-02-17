/******************************************************************************
 * James Austin Hewin
 * CSC-134-0001
 * M3HW2Five_Hewin
 * 02/16/2019
 * Program to convert numerical grade to letter grade using methods
******************************************************************************/
#include <iostream>
/*****************************************************************************/
using namespace std;
/*****************************************************************************/
/*
 * getNumberGrade()
 * accepts numerical grade from user and returns value to main()
 *
 * @return         numerical grade to convert to letter grade
 */
float getNumberGrade(void)
{
    float numericalGrade = -1;
    while(numericalGrade < 0.0 || numericalGrade > 100.0) {  // loop until valid score

        cout << "Enter numerical grade to convert to letter grade: ";
        cin >> numericalGrade;
    }
    return numericalGrade;
}
/*****************************************************************************/
/*
 * convertNumberToLetterGrade()
 * accepts numerical grade from main() and returns character value to main()
 *
 * @param     number          numerical value to convert to letter grade
 * @return                    letter grade
 */
char convertNumberToLetterGrade(float number)
{
    char charGrade;
    if(number < 60.0) {
        charGrade = 'F';
    }
    else if(number < 70.0) {
        charGrade = 'D';
    }
    else if(number < 80.0) {
        charGrade = 'C';
    }
    else if(number < 90.0) {
        charGrade = 'B';
    }
    else {
        charGrade = 'A';
    }
    return charGrade;
}
/*****************************************************************************/
/*
 * main()
 * calls methods to convert numerical grade to letter grade.  Prints results to console.
 *
 * @return                    exit status of program
 */
int main(void)
{
    float numericalGrade;                            // numerical Grade
    char letterGrade;                                // letter Grade

    numericalGrade = getNumberGrade();
    letterGrade = convertNumberToLetterGrade(numericalGrade);

    cout << "A numerical score of " << numericalGrade;
    cout << " is equivalent to a letter grade of " << letterGrade << endl;
/*****************************************************************************/
    return 0;
}
