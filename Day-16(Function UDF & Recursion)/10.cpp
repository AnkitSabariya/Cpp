#include <iostream>
using namespace std;
//------Alternative---------//
// #include <cmath>  Include cmath for pow() function
// cout << pow(m,n);

int main()
{
    // M ni N ghat  = m x m x m x m
    // 2 ni 4 ghat  = 2 x 2 x 2 x 2
    long long int m, n, temp = 1; // starting 1 because if start 0
    cout << "Enter base : "; //  temp = temp * m; 0*2 = 0 (temp = 0) so next value mult by 0 so output always 0
    cin >> m;
    cout << "Enter exponent : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        temp *= m; // temp = temp * m;
        cout <<"["<< i <<"] "<< temp << " " << endl;
    }


    cout << "---------------------------------------------------------\n";
    cout << "The Value of " << m << " to the power " << n << " is : " << temp;
}


