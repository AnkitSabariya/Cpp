#include <iostream>
using namespace std;
int fact(int a,int b)
{ 

    if (b == 0)
    {
        return 1;
    }
    else
    {

        return a * fact(a,b - 1);
       // pow(3,4)  = 3 * (3,3) 
       //           = 3 * (3,2) 
       //           = 3 * (3,1) 9
       //           = 3 * (3,0) 3
    }
    
}
int main()
{
    int m,n,ans;

    cout << "Enter exponent :";
    cin >> m;
    cout << "Enter Base";
    cin >>n;

    cout << "-------------------------\n";
    ans = fact(m,n);
    

    cout <<"Factorial is : " << ans;
}