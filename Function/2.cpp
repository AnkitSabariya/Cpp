#include <iostream>
using namespace std;
int sum(int c)
{
    if (c % 2 == 0)
    {
        cout << c << " is even no. ";
    }
    else
    {
        cout << c << " is odd no. ";
    }
    return 0;
}
int main()
{
    int a;

    cout << "Enter The  value : ";
    cin >> a;

    cout << "-------------------------\n";

    sum(a);
}