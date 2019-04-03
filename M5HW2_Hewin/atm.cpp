#include "atm.h"

/*****************************************************************************/
Atm::Atm()
{
    balance = 0.0;
}
void Atm::withdraw(double withdrawAmount)
{
    balance -= withdrawAmount;
}
void Atm::deposit(double depositAmount)
{
    balance += depositAmount;
}
double Atm::checkBalance()
{
    return balance;
}
/*****************************************************************************/
bool SafeAtm::withdraw(double withdrawAmount)
{
    if(this->balance - withdrawAmount < 0.0) {
        return false;
    }
    balance -= withdrawAmount;

    return true;
}
/*****************************************************************************/
void SecureAtm::setPin(int pin)
{
    this->pin = pin;
}
bool SecureAtm::withdraw(int pin, double withdrawAmount)
{
    if(((this->balance - withdrawAmount) < 0.0) || (this->pin != pin)) {
        return false;
    }
    balance -= withdrawAmount;
    return true;
}
bool SecureAtm::deposit(int pin, double depositAmount)
{
    if(this->pin != pin) {
        return false;
    }
    balance += depositAmount;
    return true;
}
bool SecureAtm::checkBalance(int pin)
{
    if(this->pin != pin) {
        return false;
    }
    return true;
}

double SecureAtm::secureCheckBalance()
{
    return this->balance;
}
/*****************************************************************************/
