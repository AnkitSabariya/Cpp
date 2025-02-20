#include <iostream>
using namespace std;
int main()
{
    int user, temp = 0, sum = 0, n = 0;
    float arr[] = {50 * 0.50, 100 * 0.75, 150 * 1.20};
    cout << "Total Electricity Unit : ";
    cin >> user;

    if (user >= 50)
    {
        user = user - 50; // 550
        temp = user;      // 500
        cout << "Total unit : " << temp << endl;

        cout << arr[0] << endl;

        if (user >= 150) // 500
        {
            user = user - 50;
            temp = user;
            cout << "Total unit : " << temp << endl;

            cout << arr[1] << endl;

            if (user >= 250)
            {
                user = user - 150;
                temp = user;
                cout << "Total unit : " << temp << endl;
                cout << arr[2] << endl;
                if (user >= 150)
                {
                    user = user;
                    temp = user;
                    cout << "Total unit : " << temp << endl;
                }
            }
        }
    }

    int per,m,o,f;
    per = user - 300;
    n = user * 1.50;
    cout << n << endl;
    m = arr[0] + arr[1] + arr[2] + n;
    cout << "total Rupees Per Charge : " << m << endl;
    o = (m*20)/100;
    cout << "Average : " << o << endl;
    f = m+o;

    cout << "total Amount OF Bill : " << f << endl;
}