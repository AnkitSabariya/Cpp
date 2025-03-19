#include <iostream>
using namespace std;

int power(int m, int n)
{ 
    if (n == 0) 
    {
        cout << "power(" << m << ", " << n << ") = 1 (Base Case)" << endl;
        return 1;
    }
    else
    {
        int result = m * power(m, n - 1);
        cout << "power(" << m << ", " << n << ") = " << m << " * power(" << m << ", " << n - 1 << ") = " << result << endl;
        return result;
    }
}

int main()
{
    int m, n, ans;

    cout << "Enter base (m): ";
    cin >> m;
    
    cout << "Enter exponent (n): ";
    cin >> n;

    cout << "-------------------------\n";
    
    ans = power(m, n); 

    cout << "-------------------------\n";
    cout << "Final Result: " << ans << endl;

    return 0;
}
