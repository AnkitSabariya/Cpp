#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter First Value : ";
    cin >> a;
    cout << "Enter Second Value : ";
    cin >> b;
    cout << "Enter Second Value : ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "First Value is Maximum : ";
        }
        else
        {
            cout << "Third Value is Maximum : ";
        }
    }
    else if (b > c)
    {
        cout << "Second Value is Maximum : ";
    }
    else
    {
        cout << "Third Value is Maximum : ";
    }
}
