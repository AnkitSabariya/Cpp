#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        cout << "fact(" << n << ") = 1 (Base Case)" << endl;
        return 1;
    }
    else
    {
        int result = n * fact(n - 1);
        cout << "fact(" << n << ") = " << n << " * fact(" << n - 1 << ") = " << result << endl;
        return result;
    }
}

int main()
{
    int a;

    cout << "Enter The Value: ";
    cin >> a;

    cout << "-------------------------\n";

    int ans = fact(a);

    cout << "-------------------------\n";
    cout << "Final Factorial: " << ans << endl;

    return 0;
}
