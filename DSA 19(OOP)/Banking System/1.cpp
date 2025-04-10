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
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited ₹" << amount << " successfully" << endl;
        }
        else
        {
            cout << "Deposit amount must be greater than 0!" << endl;
        }
    }

    void withdraw()
    {
        double withdraw;
        cout << "How much cash to withdraw (Available ₹" << balance << "): ";
        cin >> withdraw;
        if (withdraw <= balance && withdraw > 0)
        {
            balance -= withdraw;
            cout << "Withdrawn ₹" << withdraw << " successfully" << endl;
        }
        else
        {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }

    double getbalance()
    {
        cout << "Current balance: ₹" << balance << endl;
        return balance;
    }

    void updateBalanceFrom(BankAccount &acc)
    {
        this->balance = acc.getbalance();
    }

    virtual void calculateinterest() {} // virtual for polymorphism
};

class savingsaccount : public BankAccount
{
private:
    float intrestrate = 0.7, intrest;

public:
    void calculateinterest() override
    {
        cout << "Interest rate: 0.7%" << endl;
        intrest = (balance * intrestrate) / 100;
        cout << "Interest on balance: ₹" << intrest << endl;
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
        cout << "Enter overdraft amount: ";
        cin >> overdraft;

        if (overdraft <= 0)
        {
            cout << "Invalid amount!" << endl;
        }
        else if (overdraft > overdraftlimit)
        {
            cout << "Overdraft limit exceeded. Max ₹" << overdraftlimit << endl;
        }
        else if ((balance - overdraft) >= -overdraftlimit)
        {
            balance -= overdraft;
            cout << "Overdraft of ₹" << overdraft << " successful" << endl;
            cout << "New balance: ₹" << balance << endl;
        }
        else
        {
            cout << "Overdraft exceeds account limit!" << endl;
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
        cout << "Enter months (1 to 12): ";
        cin >> term;
        cout << "Enter FD amount (Available ₹" << balance << "): ";
        cin >> amount;

        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            interest = (amount * rate * term) / (100 * 12);
            double maturity = amount + interest;
            cout << "FD interest for " << term << " months: ₹" << interest << endl;
            cout << "FD maturity amount: ₹" << maturity << endl;
            balance += maturity;
        }
        else
        {
            cout << "Invalid FD amount. Must be > 0 and ≤ current balance." << endl;
        }
    }
};

int main()
{
    savingsaccount savings;
    checkingaccount checking;
    FDaccount fd;

    savings.setter(123456, "Ram", 5000);
    checking.updateBalanceFrom(savings); // share balance

    BankAccount *accptr = nullptr;

    int user1;

    do
    {
        cout << "\n========= Bank Menu =========\n";
        cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Account Info\n5. Interest (Saving)\n6. Overdraft (Checking)\n7. Fixed Deposit (FD)\n0. Exit\n";
        cout << "Enter option: ";
        cin >> user1;
        cout << "---------------------------------------\n";

        switch (user1)
        {
        case 1:
            savings.deposit();
            checking.updateBalanceFrom(savings);
            break;
        case 2:
            savings.withdraw();
            checking.updateBalanceFrom(savings);
            break;
        case 3:
            savings.getbalance();
            break;
        case 4:
            savings.getter();
            break;
        case 5:
            accptr = &savings;
            accptr->calculateinterest();
            checking.updateBalanceFrom(savings);
            break;
        case 6:
            checking.checkoverdraft();
            savings.updateBalanceFrom(checking);
            break;
        case 7:
            accptr = &fd;
            fd.setter(789123, "FD Account", savings.getbalance());
            accptr->calculateinterest();
            savings.updateBalanceFrom(fd);
            checking.updateBalanceFrom(savings);
            break;
        case 0:
            cout << "Exit..." << endl;
            break;
        default:
            cout << "Invalid option, try again!" << endl;
        }
    } while (user1 != 0);

    return 0;
}
