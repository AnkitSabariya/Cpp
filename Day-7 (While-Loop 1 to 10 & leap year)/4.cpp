#include <iostream>
using namespace std;
int main()
{
    // print leap years between two given numbers
    int a, b;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the Second number : ";
    cin >> b;
    while (a <= b)
    {
        if (a % 4 == 0)
        {
            cout << a << " ";
        }
        a++;
    }
}