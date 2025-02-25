#include <iostream>
using namespace std;
int main()
{
    //     Enter any number: 8
    // Output:
    // 0, 1, 1, 2, 3, 5, 8, 13

    int n, a = 0, b = 1, c;
    cout << "Enter any number : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        cout<<a<<" ";
        c = a + b; // c =1 // 1 + 1 = 
        a = b; // a = 1
        b = c; // b = 2
    }
    
}