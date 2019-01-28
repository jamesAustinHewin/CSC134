/*****************************************************************************/
// James Austin Hewin
// CSC-134
// M2LAB2_Hewin
// 01/27/2019
/*****************************************************************************/
#include <iostream>

using namespace std;
/*****************************************************************************/
int main()
{
    float numericalGrade = 0.0f;         // Initial numerical grade (0.0)
    char letterGrade = 'F';              // Initial letter grade ('F')
/*****************************************************************************/
    do{
    cout << "Type in the student's numerical grade: ";    // Prompt user for input
    cin >> numericalGrade;                                // Store numerical grade
/*****************************************************************************/
    } while (numericalGrade < 0.0 || numericalGrade > 100.0);

    if(numericalGrade < 60.0) {       // below 60.0 => 'F'
        letterGrade = 'F';
    }
    else if(numericalGrade < 70.0) {  // above/equal 60.0 AND below 70.0 => 'D'
        letterGrade = 'D';
    }
    else if(numericalGrade < 80.0) {  // above/equal 70.0 AND below 80.0 => 'C'
        letterGrade = 'C';
    }
    else if(numericalGrade < 90.0) {  // above/equal 80.0 AND below 90.0 => 'B'
        letterGrade = 'B';
    }
    else  {                           // above/equal 90.0 AND below/equal 100.0 => 'A'
        letterGrade = 'A';
    }
/*****************************************************************************/
    cout << "Numerical Grade: " << numericalGrade << "\tLetter Grade: ";
    cout << letterGrade << endl;
/*****************************************************************************/
    return 0;
}
