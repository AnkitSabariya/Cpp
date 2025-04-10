#include <iostream>
using namespace std;
int sum(int c, int d)
{
    return c + d;
}
int main()
{
    int a, b;

    cout << "Enter The First value : ";
    cin >> a;
    cout << "Enter The Second value : ";
    cin >> b;
    cout <<"--------------------------\n";
    
    cout << "Sum Is : " << sum(a, b);
}