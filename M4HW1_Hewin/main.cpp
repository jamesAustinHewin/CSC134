/*******************************************************************************
 * Name:          James Austin Hewin
 * Project:       M4HW41_Hewin
 * Date:          March 3, 2019
 * Class:         CSC-134-0001
 * Description:   Listings 7-7 through 7-17
 *****************************************************************************/
#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

void ChangesAreGood(int myparam)
{
    myparam += 10;
    cout << "Inside the function:" << endl;
    cout << myparam << endl;
}

void ChangesAreGood(int *myparam)
{
    (*myparam) += 10;
    cout << "Inside the function:" << endl;
    cout << *myparam << endl;
}

void Paranoid(string *realmessage)
{
    (*realmessage)[6] = 'i';
    realmessage -> replace(9, 1, "");
    realmessage -> insert(18, "ad");
    realmessage -> replace(15, 2, "in");
    realmessage -> replace(23, 7, "!");
    realmessage -> replace(4, 3, "ali");
}

string *GetSecretCode()
{
    string *code = new string;
    code -> append("CR");

    int randomnumber = rand();
    ostringstream converter;
    converter << randomnumber;

    code -> append(converter.str());
    code -> append("NQ");

    return code;
}

string *GetNotSoSecretCode()
{
    string *code = new string("ABCDEF");
    return code;
}

void MessMeUp(int &myparam)
{
    myparam = myparam * 2 + 10;
}

string Paranoid2(const string *realmessage)
{
    string NewString = *realmessage;
    NewString[6] = 'i';
    NewString.replace(9, 1, "");
    NewString.insert(18, "ad");
    NewString.replace(15, 2, "in");
    NewString.replace(23, 7, "!");
    NewString.replace(4, 3, "ali");

    return NewString;
}
int main()
{
    cout << "********************Listing 7-7********************" << endl;
    cout << "--------Allocating Memory by using new-------------" << endl;
    int *ptr = new int;
    *ptr = 10;
    cout << *ptr << endl << endl;

    cout << "********************Listing 7-8********************" << endl;
    cout << "--Allocating and Initializing Memory by using new--" << endl;
    int *ptr2 = new int(10);
    cout << *ptr2 << endl << endl;

    cout << "********************Listing 7-9********************" << endl;
    cout << "--------Using the new operator with strings--------" << endl;
    string *Password = new string;
    *Password = "The egg salad is not fresh.";
    cout << *Password << endl << endl;

    cout << "********************Listing 7-10********************" << endl;
    cout << "-------Using delete to clean up your pointers-------" << endl;
    string *phrase = new string("All presidents are cool!!!");
    cout << *phrase << endl;

    (*phrase)[20] = 'r';
    phrase -> replace(22, 4, "oked");
    cout << *phrase << endl << endl;

    delete phrase;

    cout << "********************Listing 7-11********************" << endl;
    cout << "-A function cannot change the original variables passed into it-" << endl;
    int mynumber = 30;
    cout << "Before the function:"  << endl;
    cout << mynumber << endl;

    ChangesAreGood(mynumber);
    cout << "After the function:" << endl;
    cout << mynumber << endl << endl;

    cout << "********************Listing 7-12********************" << endl;
    cout << "-Using pointers to modify a variable passed into a function-" << endl;
    mynumber = 30;
    cout << "Before the function:"  << endl;
    cout << mynumber << endl;

    ChangesAreGood(&mynumber);
    cout << "After the function:" << endl;
    cout << mynumber << endl << endl;

    cout << "********************Listing 7-13********************" << endl;
    cout << "-Using a Function to Modify a String Passed into it by using Pointers-" << endl;
    string message = "The friends are having dinner";
    cout << message << endl;

    Paranoid(&message);
    cout << message << endl << endl;

    cout << "********************Listing 7-14********************" << endl;
    cout << "-Returning a pointer to a string from a function-" << endl;

    string *newcode;
    int index;

    for(index = 0; index < 10; index++)
    {
        newcode = GetSecretCode();
        cout << *newcode << endl;
    }
    cout << endl;

    cout << "********************Listing 7-15********************" << endl;
    cout << "-Dereferencing your return value immediately-" << endl;

    string newcode2;
    index = 0;

    for(index = 0; index < 10; index++) {
        newcode2 = *GetNotSoSecretCode();
        cout << newcode2 << endl;
    }

    cout << endl;

    cout << "********************Listing 7-16********************" << endl;
    cout << "-With References, you don't need pointers!-" << endl;

    mynumber = 30;
    MessMeUp(mynumber);
    cout << mynumber << endl << endl;

    cout << "********************Listing 7-17********************" << endl;
    cout << "-Using a const Reference to get speed and unchangeable data-" << endl;

    string message2 = "The friends are having dinner";
    cout << message2 << endl;

    string NewMessage = Paranoid2(&message2);
    cout << NewMessage << endl << endl;

    return 0;
}
