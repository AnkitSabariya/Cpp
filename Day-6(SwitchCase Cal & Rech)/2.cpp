#include <iostream>
using namespace std;

int main()
{

    int user, x, y;
   

    cout << "-----------------------------------------" << endl;

    cout << " 1 . Addition (+)" << endl;
    cout << " 2 . Subtraction (-)" << endl;
    cout << " 3 . Multiplication (*)" << endl;
    cout << " 4 . Division (/)" << endl;
    cout << " 5 . Modulus (%)" << endl;

    cout << "-----------------------------------------" << endl;

    cout << " choose any a number: ";
    cin >> user;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    cout << "-----------------------------------------" << endl;

    switch (user)
    {
    case 1:
        cout << "Addition (+) : " << x + y << endl;
        break;
    case 2:
        cout << "Subtraction (-) : " << x - y << endl;
        break;
    case 3:
        cout << "Multiplication (*) : " << x * y << endl;
        break;
    case 4:
        cout << "Division (/) : " << x / y << endl;
        break;
    case 5:
        cout << "Modulus (%) : " << x % y << endl;
        break;

    default:
        cout << "Invalid !" << endl;
        break;
    }
     cout << "-----------------------------------------" << endl;
}