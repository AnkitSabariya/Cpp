#include <iostream>
using namespace std;
class BankAccount
{
private:
    long double num;
    string name;

protected:
    double balance;

public:
    void setter(double num, string name, double balance)
    {
        this->num = num;
        this->name = name;
        this->balance = balance;
    }
    void getter()
    {
        cout << "Account no: " << num << endl;
        cout << "Account name: " << name << endl;
        cout << "Account balance: ₹" << balance << endl;
    }
    void deposit()
    {
        double amount;
        cout << "Deposit amount: ";
        cin >> amount;
        balance += amount;
        cout << "Deposit ₹" << amount << " Amount successfully" << endl;
    }
    void withdraw()
    {
        double withdraw;
        cout << "how much cash withdrow (from ₹" << balance << "): ";
        cin >> withdraw;
        if (withdraw <= balance)
        {
            balance -= withdraw;
            cout << "withdraw ₹" << withdraw << " Amount successfully" << endl;
        }
        else
        {
            cout << "please get bank from overdraft" << endl;
        }
    }
    void getbalance()
    {
        cout << "Current balance frome Account ₹" << balance << endl;
    }
    double getBalanceAmount()
    {
        return balance;
    }

    // Virtual function for polymorphism
    virtual void calculateinterest() {}
};

class savingsaccount : public BankAccount
{
private:
    float intrestrate = 0.7, intrest;

public:
    void calculateinterest() override
    {
        cout << "intrest rate is 0.7%" << endl;

        intrest = (balance * intrestrate) / 100;
        cout << "Intrest of Balance ₹" << intrest << endl;
        balance += intrest;
    }
};

class checkingaccount : public BankAccount
{
private:
    double overdraftlimit = 50000, overdraft;

public:
    void checkoverdraft()
    {
        cout << "enter Amount : ";
        cin >> overdraft;
        if (overdraft > overdraftlimit)
        {
            // only this current balance -50000(- hai) or od (-1000) = -51000 cross limit so second condtion
            cout << "Overdraft limit exceeded. You cannot withdraw more than ₹" << overdraftlimit << "." << endl;
        }
        else if ((balance - overdraft) >= -overdraftlimit)
        { // because first cut balance - then od if under 50k
            //  50000  - 52000  = -2000 [-2000 >= -50000]  ✅
            // 100000  - 10000  = 90000   [90000 >= -50000] ✅
            // 30000  - 30000  = 0       [0 >= -50000] ✅
            // -40000  - 20000  = -60000 [-60000 >= -50000] ❌ {All Ready -40000 overdraft}
            //  5000  - 60000  = -55000 [-55000 >= -50000] ❌ {overlimit overdraft}
            cout << "Bank overdraft successful: ₹" << overdraft << endl;
            balance -= overdraft; // Deduct the overdraft amount from the balance
            cout << "New balance: ₹" << balance << endl;
        }
        else
        {
            cout << " Overdraft limit exceeded by your withdrawal request." << endl;
        }
    }
};

class FDaccount : public BankAccount
{
private:
    int term;
    float rate = 6.5;
    double amount, interest;

public:
    void calculateinterest() override
    {
        cout << "Enter the month(0 to 12): ";
        cin >> term;
        cout << "Enter the amount(from ₹" << balance << "): ";
        cin >> amount;
        if (amount <= balance)
        {
            balance -= amount;
            interest = (amount * rate * term) / (100 * 12);
            double maturity = amount + interest;
            cout << "FD Interest for " << term << " months is ₹" << interest << endl;
            balance += maturity;
        }
        else
        {
            cout << "not capeble balance for fd" << endl;
        }
    }
};

int main()
{
    savingsaccount savings;
    checkingaccount check;
    FDaccount fd;

    BankAccount *accptr; // for polymorphism

    savings.setter(123456, "Ram", 5000);

    int user1;

    do
    {
        cout << "========= Bank Menu =========\n";
        cout << "press 1 for Deposit" << endl;
        cout << "press 2 for withdraws" << endl;
        cout << "press 3 for current Balance" << endl;
        cout << "press 4 for Accountinfo" << endl;
        cout << "press 5 for Intrestrate" << endl;
        cout << "press 6 for overdraft" << endl;
        cout << "press 7 for FixedDeposite" << endl;
        cout << "press 0 for exit" << endl;
        cout << "Press any option (0 to 7): ";
        cin >> user1;
        cout << "---------------------------------------\n";
        switch (user1)
        {

        case 1:
            savings.deposit();
            break;
        case 2:
            savings.withdraw();
            break;
        case 3:
            savings.getbalance();
            break;
        case 4:
            savings.getter();
            break;
        case 5:
            accptr = &savings;
            accptr->calculateinterest(); // polymorphism
            break;
        case 6:
            check.setter(654321, "Shyam", 1000); // optional init
            check.checkoverdraft();
            break;
        case 7:
            fd.setter(789123, "FD Account", savings.getBalanceAmount()); // optional init
            accptr = &fd;
            accptr->calculateinterest(); // polymorphism
            break;
        case 0:
            cout << "Exit.." << endl;
            break;
        default:
            cout << "Invalid option, try again!" << endl;
            break;
        }
    } while (user1 != 0);
}
