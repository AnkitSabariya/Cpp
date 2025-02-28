#include <iostream>
using namespace std;

int main()
{
    int user, last, first;
    cout << "Enter The value : ";
    cin >> user; // 456
    cout << "----------------------" << endl;
    last = user % 10; // last digit is mode like reminder
    cout << "Last Value is :" << last << endl;

    while (user > 10)
    {
        user = user / 10;
        first = user % 10;
    }
    cout << "First Value is :" << first << endl;
    cout << "-------------------------------" << endl;
    cout << "First : " << first << " + " << " Last : " << last << " = " << first + last;
}