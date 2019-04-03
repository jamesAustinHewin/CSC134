#include <iostream>
#include "atm.h"
/** --------------------INSTRUCTIONS--------------------
User chooses type of ATM to use:

Atm:         Check Balance returns the current balance
             Deposit deposits money into account
             Withdraw withdraws money from account

SafeAtm:     Withdraw checks for overdraft

SecureAtm:   PIN must be verified for successful transactions
             Withdraw checks for overdraft

When using the SecureATM please set the PIN FIRST before attempting
any other functionality.
*/
using namespace std;
/*****************************************************************************/
/** SubMenu()
    display MENU for banking options
    "0" - Quit
    "1" - Check Account Balance
    "2" - Deposit Money
    "3" - Withdraw Money
    "4" - set PIN (only for secureATM)
    @return    banking option */
int SubMenu(void);
/*****************************************************************************/
/** main()
    @return    exit status of the program */
/*****************************************************************************/
int main()
{
    int atmType = 0;          // "0" - Atm, "1" - SafeAtm, "2" - SecureAtm
    int bankingOption = 0;    // see SubMenu() options above
    double amount = 0.0;      // amount to deposit/withdraw
    int pin = 0000;           // personal identification number (SecureAtm)
    bool success = false;     // successful transaction (SafeAtm, SecureAtm)
/*****************************************************************************/
    /** Create three Atm objects (Atm, SafeAtm, SecureAtm, and pointers to
                                  these objects) */
    Atm austinAtm;
    SafeAtm austinSafeAtm;
    SecureAtm austinSecureAtm;

    Atm *austinAtmPtr = &austinAtm;
    SafeAtm *austinSafeAtmPtr = &austinSafeAtm;
    SecureAtm *austinSecureAtmPtr = &austinSecureAtm;
/*****************************************************************************/
    /** User selects which type of ATM to use */
    do{
        cout << "Choose from the following ATMs:" << endl;
        cout << "0  Quit" << endl;
        cout << "1  Atm" << endl;
        cout << "2  SafeAtm" << endl;
        cout << "3  SecureAtm" << endl << endl;
        cin >> atmType;
/*****************************************************************************/
        switch(atmType) {
        case 0:
            break;
/*****************************************************************************/
        /** Exercise ATM functionality */
        case 1:
            do{
               bankingOption = SubMenu();

               switch(bankingOption) {
                  case 0:
                     break;
                  case 1:
                     cout << "Checking Account Balance.........." << endl;
                     cout << "Current Balance:  "<< austinAtmPtr->checkBalance() << endl << endl;
                     break;
                  case 2:
                     cout << "Enter amount to deposit:  ";
                     cin >> amount;
                     austinAtmPtr->deposit(amount);
                     cout << endl << endl;
                     break;
                  case 3:
                     cout << "Enter amount to withdraw:  ";
                     cin >> amount;
                     austinAtmPtr->withdraw(amount);
                     cout << endl << endl;
                     break;
                  case 4:
                     cout << "Invalid operation for Atm" << endl << endl;
                     break;
                  default:
                     break;
                  }
            } while (bankingOption != 0);
            break;
/*****************************************************************************/
        /** Exercise SAFE ATM functionality */
        case 2:
            do{
               bankingOption = SubMenu();

               switch(bankingOption) {
               case 0:
                  break;
               case 1:
                  cout << "Checking Account Balance.........." << endl;
                  cout << "Current Balance:  "<< austinSafeAtmPtr->checkBalance() << endl << endl;
                  break;
               case 2:
                  cout << "Enter amount to deposit:  ";
                  cin >> amount;
                  austinSafeAtmPtr->deposit(amount);
                  cout << endl << endl;
                  break;
               case 3:
                  cout << "Enter amount to withdraw:  ";
                  cin >> amount;
                  austinSafeAtmPtr->withdraw(amount);
                  cout << endl << endl;
                  break;
               case 4:
                  cout << "Invalid operation for Atm" << endl << endl;
                  break;
               default:
                  break;
               }
            } while (bankingOption != 0);
            break;
/*****************************************************************************/
        /** Exercise SECURE ATM functionality */
        case 3:
            do{
            bankingOption = SubMenu();

            switch(bankingOption) {
               case 0:
                  break;
               case 1:
                  cout << "Enter four digit PIN:  ";
                  cin >> pin;
                  cout << "Checking Account Balance.........." << endl;
                  success = austinSecureAtmPtr->checkBalance(pin);
                  if(success) {
                     cout << "Current Balance:  "<< austinSecureAtmPtr->secureCheckBalance() << endl << endl;
                  }
                  else {
                     cout << "Unsuccessful Check Balance" << endl << endl;
                  }
                  break;
               case 2:
                  cout << "Enter four digit PIN:  ";
                  cin >> pin;
                  cout << "Enter amount to deposit:  ";
                  cin >> amount;
                  success = austinSecureAtmPtr->deposit(pin, amount);
                  if(success) {
                      cout << "Successful Deposit" << endl << endl;
                  }
                  else {
                     cout << "Unsuccessful Deposit" << endl << endl;
                  }
                  cout << endl << endl;
                  break;
               case 3:
                  cout << "Enter four digit PIN:  ";
                  cin >> pin;
                  cout << "Enter amount to withdraw:  ";
                  cin >> amount;
                  success = austinSecureAtmPtr->withdraw(pin, amount);
                  if(success) {
                     cout << "Successful Withdrawal" << endl << endl;
                  }
                  else {
                     cout << "Unsuccessful Withdrawal" << endl << endl;
                  }
                  austinSecureAtmPtr->withdraw(pin, amount);
                  cout << endl << endl;
                  break;
               case 4:
                  cout << "Enter four digit PIN:  ";
                  cin >> pin;
                  austinSecureAtmPtr->setPin(pin);
                  break;
               default:
                  break;
               }
            } while (bankingOption != 0);
              break;
/*****************************************************************************/
        default:
           break;
        }
    } while (atmType != 0);

    return 0;
}
/*****************************************************************************/
int SubMenu(void)
{
    int option = 0;
    cout << "Choose from the following ATM options:" << endl;
    cout << "0  Quit" << endl;
    cout << "1  Check Account Balance" << endl;
    cout << "2  Deposit Money" << endl;
    cout << "3  Withdraw Money" << endl;
    cout << "4  Set PIN (only for SecureAtm)" << endl << endl;
    cin >> option;

    return option;
}
/*****************************************************************************/
