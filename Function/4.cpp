#include <iostream>
using namespace std;
char fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
    return 0;
}
int main()
{
    int a;

    cout << "Enter The  value : ";
    cin >> a;

    cout << "-------------------------\n";

    cout <<"Factorial is : " << fact(a);
}