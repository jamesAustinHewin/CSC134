#include <iostream>

#include "observer.h"

using namespace std;

int main()
{
    Subject Alarm;

    Subject Donuts;

    Police *TJHooker = new Police(&Donuts, "TJ");

    Dog *Fido = new Dog(&Alarm);

    Police *JoeFriday = new Police(&Alarm, "JoeFriday");

    cout << "TJ on the beat" << endl;
    Alarm.Event();
    cout << endl;
    cout << "TJ off for the day" << endl;
    delete TJHooker;
    delete Fido;
    delete JoeFriday;

    Alarm.Event();

    return 0;
}
