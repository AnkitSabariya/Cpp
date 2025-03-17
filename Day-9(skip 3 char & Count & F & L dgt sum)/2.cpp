#include <iostream>
using namespace std;

int main()
{
    int user, count = 0; // 456
    cout << "Enter The value : ";
    cin >> user;
ankit:
    if (user != 0) // 0.4 int in 0 count so Condition false
    {
        user = user / 10; // 45.6 // 4.5 // 4 //
        count++;          // 1 // 2 // 3
        goto ankit;
    }
    cout << "Total User Input value is : " << count;
}