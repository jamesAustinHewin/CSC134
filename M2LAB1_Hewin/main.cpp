/********************************************************************************************************/
// CSC 134
// M2LAB1_Hewin
// James Austin Hewin
// 01/24/2019
/********************************************************************************************************/
#include <iostream>
#include <string>
/********************************************************************************************************/
using namespace std;
/********************************************************************************************************/
int main()
{
    string movieName = "Napoleon Dynamite";                // Name of Movie
    double rating = 6.9;                                   // Rating of Movie
    int year = 2004;                                       // Year of Movie
    char firstLetter = movieName[0];                       // First letter of movie
/********************************************************************************************************/
/* Print out default movie info */
/********************************************************************************************************/
    cout << "The movie you entered is named " << movieName << "." << endl;
    cout << "It was released in " << year << ".  It has an IMDB rating of " << rating << "." << endl;
    cout << "I would file this movie under \"" << firstLetter << "\"." << endl;

    cout << endl;
/********************************************************************************************************/
/* Gather movie information from user */
/********************************************************************************************************/
    cout << "Please enter the name of the movie: ";
    getline(cin, movieName);
    cout << "Please enter the rating of the movie: ";
    cin >> rating;
    cout << "Please enter the year of the movie: ";
    cin >> year;
    firstLetter = movieName[0];

    cout << endl;
/********************************************************************************************************/
/* Print out user inputted movie info */
/********************************************************************************************************/
    cout << "The movie you entered is named " << movieName << "." << endl;
    cout << "It was released in " << year << ".  It has an IMDB rating of " << rating << "." << endl;
    cout << "I would file this movie under \"" << firstLetter << "\"." << endl;

    cout << endl;
/********************************************************************************************************/
    return 0;
}
