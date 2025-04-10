#include <iostream>
using namespace std;
int main()
{
    // Write a Program to print even numbers from 1 to N using a do-while loop.
    int a = 1;
    int n;
    cout << "Enter any number : ";
    cin >> n;
    do
    {
        if (a % 2 == 0)
        {
            cout << a << " ";
        }
        a++;

    } while (a <= n);
}