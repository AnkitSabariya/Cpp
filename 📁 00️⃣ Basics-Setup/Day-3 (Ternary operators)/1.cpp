#include <iostream>
using namespace std;
int main()
{
    //     Write a Program to find the minimum number from the given 2 numbers using Ternary  Operators.

    int a, b;
    cout << "Enter value Of a = ";
    cin >> a;
    cout << "Enter value Of b = ";
    cin >> b;

    (a < b) ? cout << "The minimum value A is : " << a : cout << "The minimum value B is : " << b;
}
