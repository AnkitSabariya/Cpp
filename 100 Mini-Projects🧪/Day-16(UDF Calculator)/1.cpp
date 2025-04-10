#include <iostream>
using namespace std;

// UDFs with Calculator

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b; //
}
int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int choice, num1, num2;

    do
    {
        cout << "\n================ Calculator Menu ================\n";
        cout << "Press 1 for +\n";
        cout << "Press 2 for -\n";
        cout << "Press 3 for *\n";
        cout << "Press 4 for /\n";
        cout << "Press 5 for % (mod)\n";
        cout << "Press 0 to Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5)
        {
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
        }

        switch (choice)
        {
        case 1:
            cout << "Addition: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Subtraction: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Multiplication: " << multiply(num1, num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Division: " << divide(num1, num2) << endl;
            else
                cout << "Cannot divide by zero!" << endl;
            break;
        case 5:
            if (num2 != 0)
                cout << "Mod: " << mod(num1, num2) << endl;
            else
                cout << "Cannot take mod by zero!" << endl;
            break;
        case 0:
            cout << "Exiting the calculator. Thank you!" << endl;
            break;
        default:
            cout << "Invalid choice! Please enter between 0 to 5." << endl;
        }

    } while (choice != 0);
}
