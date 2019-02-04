/*****************************************************************************/
// James Austin Hewin
// CSC-134
// M2HW1_Hewin
// 02/03/2019
/*****************************************************************************/
#include <iostream>
#include <cmath>

#define NUMBER_OF_GRADES 3.0f
#define SQUARE_FEET_PER_GALLON_PRIMER 200.0f
#define SQUARE_FEET_PER_GALLON_PAINT 350.0f

using namespace std;
/*****************************************************************************/
/** function prototype */
float CalculateAvgGrade(float firstGrade, float secondGrade, float thirdGrade);
/*****************************************************************************/

int main()
{
    cout << "****************RectangleArea Calculation****************" << endl << endl;
    float length = 0.0f, width = 0.0f;

    cout << "Enter the length of a rectangle: ";
    cin >> length;
    cout << "Enter the width of a rectangle: ";
    cin >> width;

    cout << "A rectangle with length " << length << " and width " << width;
    cout << " has an area of " << (length * width) << endl << endl;
    cout << "****************END RectangleArea Calculation************" << endl << endl;

    cout << "****************Temperature Conversion*******************" << endl << endl;
    float celsius = 0.0f, fahrenheit = 0.0f;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = 9.0f / 5.0f * celsius + 32.0f;
    cout << "A temperature of " << celsius << " degrees Celsius is equal to ";
    cout << fahrenheit << " degrees Fahrenheit" << endl << endl;
    cout << "****************END Temperature Conversion***************" << endl << endl;

    cout << "****************Movie Database***************************" << endl << endl;

    string movieNameOne = "Napoleon Dynamite";                // Name of Movie1
    double ratingOne = 6.9;                                   // Rating of Movie1
    int yearOne = 2004;                                       // Year of Movie1
    char firstLetterOne = movieNameOne[0];                    // First letter of movie1

    string movieNameTwo = "Office Space";                     // Name of Movie2
    double ratingTwo = 7.8;                                   // Rating of Movie2
    int yearTwo = 1999;                                       // Year of Movie2
    char firstLetterTwo = movieNameTwo[0];                    // First letter of movie2

/*****************************************************************************/
/* Gather movie information from user */
/*****************************************************************************/
    cout << "Please enter the name of Movie #1: ";
    cin.ignore();
    getline(cin, movieNameOne);
    cout << "Please enter the rating of Movie #1: ";
    cin >> ratingOne;
    cout << "Please enter the year of Movie #1: ";
    cin >> yearOne;
    firstLetterOne = movieNameOne[0];

    cout << endl;

    cout << "Please enter the name of Movie #2: ";
    cin.ignore();
    getline(cin, movieNameTwo);
    cout << "Please enter the rating of Movie #2: ";
    cin >> ratingTwo;
    cout << "Please enter the year of Movie #2: ";
    cin >> yearTwo;
    firstLetterTwo = movieNameTwo[0];


    if(ratingOne > ratingTwo) {
        cout << "I recommend that you watch " << movieNameOne << endl;
    }
    else {
        cout << "I recommend that you watch " << movieNameTwo << endl;
    }

    cout << endl;
    cout << "****************END Movie Database***********************" << endl << endl;

    cout << "****************Test Grades******************************" << endl << endl;
    float grade1, grade2, grade3;
    float averageGrade;
    char letterGrade;

    cout << "Enter Grade #1: ";
    cin >> grade1;
    cout << "Enter Grade #2: ";
    cin >> grade2;
    cout << "Enter Grade #3: ";
    cin >> grade3;

    averageGrade = CalculateAvgGrade(grade1, grade2, grade3);

    if(averageGrade < 60.0) {       // below 60.0 => 'F'
        letterGrade = 'F';
    }
    else if(averageGrade < 70.0) {  // above/equal 60.0 AND below 70.0 => 'D'
        letterGrade = 'D';
    }
    else if(averageGrade < 80.0) {  // above/equal 70.0 AND below 80.0 => 'C'
        letterGrade = 'C';
    }
    else if(averageGrade < 90.0) {  // above/equal 80.0 AND below 90.0 => 'B'
        letterGrade = 'B';
    }
    else {                            // above/equal 90.0 AND below/equal 100.0 => 'A'
        letterGrade = 'A';
    }

    cout << "An average grade of " << averageGrade << " corresponds to a letter grade of " << letterGrade << endl << endl;
    cout << "****************END Test Grades**************************" << endl << endl;

    cout << "****************Room Remodel*****************************" << endl << endl;

    float wallLength, wallWidth, totalWallArea, numberOfWalls;
    float gallonsOfPrimer, gallonsOfPaint;

    cout << "Please enter the length of the wall in feet: ";
    cin >> wallLength;
    cout << "Please enter the width of the wall in feet: ";
    cin >> wallWidth;
    cout << "Please enter the number of walls as an integer: ";
    cin >> numberOfWalls;

    totalWallArea = wallLength * wallWidth * numberOfWalls;   // square footage is length * width * number of walls
    gallonsOfPrimer = ceil(totalWallArea / SQUARE_FEET_PER_GALLON_PRIMER); // round up to get an integer number of gallons
    gallonsOfPaint = ceil(totalWallArea / SQUARE_FEET_PER_GALLON_PAINT); // round up to get an integer number of gallons
    cout << "The area of a single wall is " << totalWallArea / numberOfWalls << " square feet" << endl << endl;

    cout << "The wall(s) shall require " << gallonsOfPrimer << " gallon(s) of primer" << endl;
    cout << "The wall(s) shall require " << gallonsOfPaint << " gallon(s) of paint" << endl << endl;

    cout << "****************END Room Remodel*************************" << endl << endl;
    return 0;
}
float CalculateAvgGrade(float firstGrade, float secondGrade, float thirdGrade)

{
    return (firstGrade + secondGrade + thirdGrade) / NUMBER_OF_GRADES;
}
