#include <iostream>
using namespace std;
int main()
{
    //     Write a Program to find the minimum number from the given 2 numbers using if else.
    // For example,
    // Input:
    // Enter a value of the first number: 8
    // Enter a value of the second number: 3
    // Output:
    // The minimum value is: 3

    int a, b;
    cout << "Enter velue Of a = ";
    cin >> a;
    cout << "Enter velue Of b = ";
    cin >> b;
   
    if (a < b)
    {
        cout << "The minimum value is : " << a;
    }
    else  
    {
        cout << "The minimum value is : " << b;
    }
   
}
