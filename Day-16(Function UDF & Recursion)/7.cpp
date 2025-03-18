#include<iostream>
using namespace std;

int prime(int user) {
    int count = 0;
    for (int i = 1; i <= user; i++)
    {
        if (user % i == 0) // 8  % 8 = 0
        {
            count++;
        }
    }
    if (count > 2)
    {
        cout << user << " is not prime number";
    }
    else
    {
        cout << user << " is prime number";
    }
    return count;
    
}

int main()
{
    int user;

    cout << "enter the value: ";
    cin >> user;

    prime(user);
}