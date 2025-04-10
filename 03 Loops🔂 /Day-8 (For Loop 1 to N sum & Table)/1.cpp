#include <iostream>
using namespace std;
int main()
{
    // 1 to N ...Sum using for loop.

    int n, sum = 0;
    cout << "Enter any number : ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "The Total Sum is : " << sum;
}