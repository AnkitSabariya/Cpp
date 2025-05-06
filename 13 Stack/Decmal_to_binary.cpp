#include <iostream>
using namespace std;

int main()
{
    int user,reminder,ans = 0,pow = 1;
    cout << "Enter Decimal value : ";
    cin >> user;
   
    while (user != 0)
    {
        reminder = user % 2; // 13 % 2 = 1 || 6{rem 0}
        user = user / 2;  // 13 / 2 = 6 {only store second loop ma update } 3
        ans += (reminder * pow); // ans = 10 {0*10}
        pow = pow * 10;
       
       
    }
    cout <<"Ans : " << ans;
    

    return 0;
}