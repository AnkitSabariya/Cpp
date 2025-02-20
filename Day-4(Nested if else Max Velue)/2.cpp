#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Enter First Value : ";
    cin >> a;
    cout << "Enter Second Value : ";
    cin >> b;
    cout << "Enter Third Value : ";
    cin >> c;
    cout << "Enter Fourth Value : ";
    cin >> d;
    if (a != b && a != c && a != d  && b != c  && b != d && c != d)
    {
        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    cout << "first Value is Maximum : ";
                }
                else
                {
                    cout << "Fourth Value is Maximum : ";
                }
            }
            else
            {
                cout << "third Value is Maximum : ";
            }
        }
        else if (b > c)
        {
            if (b > d)
            {
                cout << "Second Value is Maximum : ";
            }
            else
            {
                cout << "Fourth Value is Maximum : ";
            }
        }
        else if (c > d)
        {
            cout << "Third Value is Maximum : ";
        }
        else
        {
            cout << "Four Value is Maximum : ";
        }
    }
    else{
        cout << "All Value iqual : ";

    }
    


}
