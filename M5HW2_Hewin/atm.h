#ifndef ATM_H_INCLUDED
#define ATM_H_INCLUDED
/*****************************************************************************/
/** Atm class to model checking account transactions using an ATM */
class Atm
{
protected:
    /** balance in checking account */
    double balance;
public:
    /** Atm()
        constructor to initialize checking account with initial balance */
    Atm();

    /** withdraw()
        withdraw money from checking account
        @param     withdrawAmount        amount to withdraw from checking account */
    void withdraw(double withdrawAmount);

    /** deposit()
        deposit money into checking account
        @param     depositAmount        amount to deposit into checking account */
    void deposit(double depositAmount);

    /** checkBalance()
        check the balance in checking account
        @return       balance in checking account */
    double checkBalance();
};
/*****************************************************************************/
/** SafeAtm class to model checking account transactions using a SafeAtm
    Inherits Atm Class */
class SafeAtm : public Atm
{
public:
    /** withdraw()
        withdraw money from checking account
        @param     withdrawAmount        amount to withdraw from checking account
        @return    "true" if successful (no overdraft), false otherwise */
    bool withdraw(double withdrawAmount);
};
/*****************************************************************************/
/** SecureAtm class to model checking account transactions using a SecureAtm
    Inherits SafeAtm Class */
class SecureAtm : public SafeAtm
{
private:
    /** personal identification number (PIN) for secure ATM */
    int pin;
public:
    /** setPin()
    set the personal identification number (PIN) for this account
    @param     pin      personal identification number for secure checking account */
    void setPin(int pin);

    /** withdraw()
    withdraw money from checking account
    @param    pin                 personal identification number for checking account
    @param    withdrawAmount      amount to withdraw from checking account
    @return   "true" if successful (no overdraft/Valid PIN), false otherwise */
    bool withdraw(int pin, double withdrawAmount);

    /** deposit()
    deposit money into checking account
    @param    pin                 personal identification number for checking account
    @param    depositAmount       amount to deposit into checking account
    @return   "true" if successful (Valid PIN), false otherwise */
    bool deposit(int pin, double depositAmount);

    /** checkBalance()
    check balance in checking account
    @param    pin                 personal identification number for checking account
    @return   "true" if successful (Valid PIN), false otherwise */
    bool checkBalance(int pin);

    /** secureCheckBalance()
    check balance in checking account after PIN verified
    @return       balance in checking account */
    double secureCheckBalance();
};
/*****************************************************************************/
#endif // ATM_H_INCLUDED
