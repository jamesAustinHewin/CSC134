#include <iostream>

using namespace std;

int main()
{
    cout << "****************LISTING 7-1****************" << endl;
    cout << "Printing the address of variable NumberOfPotholes" << endl;
    int NumberOfPotholes = 532587;
    cout << &NumberOfPotholes << endl << endl;

    cout << "****************LISTING 7-2****************" << endl;
    cout << "Modifying variable NumberOfPotholes using a pointer and printing new value" << endl;
    int *ptr;
    ptr = &NumberOfPotholes;
    *ptr = 6087;
    cout << NumberOfPotholes << endl << endl;

    cout << "****************LISTING 7-3****************" << endl;
    cout << "Accessing variable NumberOfPotholes using a pointer" << endl;
    int SaveForLater;
    SaveForLater = *ptr;
    cout << SaveForLater << endl;
    *ptr = 7000;
    cout << *ptr << endl;
    cout << SaveForLater << endl << endl;

    cout << "****************LISTING 7-4****************" << endl;
    cout << "Pointing to a string" << endl;
    string GoodMovie;
    string *ptrToString;
    GoodMovie = "Best in Show";
    ptrToString = &GoodMovie;
    cout << *ptrToString << endl;

    *ptrToString = "Galaxy Quest";
    cout << GoodMovie << endl << endl;

    cout << "****************LISTING 7-5****************" << endl;
    cout << "Using Pointers to Point to a string" << endl;
    string HorribleMovie;
    HorribleMovie = "L.A. Confidential";
    ptrToString = &HorribleMovie;

    for(unsigned i = 0; i < HorribleMovie.length(); i++) {
        cout << (*ptrToString)[i] << " ";
    }
    cout << endl << endl;

    cout << "****************LISTING 7-6****************" << endl;
    cout << "Using Pointers to Point to something else and back again" << endl;
    int ExpensiveComputer;
    int CheapComputer;
    int *ptrToComp;

    ptrToComp = &ExpensiveComputer;
    *ptrToComp = 2000;
    cout << *ptrToComp << endl;

    ptrToComp = &CheapComputer;
    *ptrToComp = 500;
    cout << *ptrToComp << endl;

    ptrToComp = &ExpensiveComputer;
    cout << *ptrToComp << endl << endl;

    return 0;
}
