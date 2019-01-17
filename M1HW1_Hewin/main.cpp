// CSC 134
// M1HW1
// James Austin Hewin
// 01/17/2019

#include <iostream>

using namespace std;

int main(void)
{
    int numberFtccClasses = 4;
    string classOne = "CSC-245-0001\t\t\"Adv C/C++ Programming\"";
    string classTwo = "EGR-150-0002\t\t\"Intro to Engineering\"";
    string classThree = "ELN-131-0001\t\t\"Analog Electronics I\"";
    string classFour = "ELN-133-0001\t\t\"Digital Electronics\"";

    int numberOfPets = 0;

    char gender = 'M';
    float lunchCost = 10.13f;

    cout << "My name is Austin and I teach at FTCC!"  << endl;
    cout << "I am teaching " << numberFtccClasses << " classes this Spring 2019 semester:"  << endl << endl;
    cout << "Class 1: " << classOne << endl;
    cout << "Class 2: " << classTwo << endl;
    cout << "Class 3: " << classThree << endl;
    cout << "Class 4: " << classFour << endl << endl;

    cout << "I have " << numberOfPets << " pets." << endl;
    cout << "I live in Garner, North Carolina." << endl;

    cout << "My gender is " << gender << "." << endl;
    cout << "I recently had a lunch at Fazoli's that cost me $" << lunchCost << "." << endl;

    return 0;
}
