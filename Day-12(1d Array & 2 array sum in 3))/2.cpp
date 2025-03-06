#include <iostream>
using namespace std;

int main()
{

    int user, ans;
    cout << "Enter array size : ";
    cin >> user;
    int a[user];
    cout<<"Enter array A's elements: " << user <<endl;
    for (int i = 0; i < user; i++)
    {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }
    int b[user];
    cout<<"Enter array B's elements: " << user <<endl;
    for (int i = 0; i < user; i++)
    {
        cout << "b[" << i << "] : ";
        cin >> b[i];
    }
    int c[user];

    cout << "Output:"<<endl;
    cout << "Array C is : ";
    for (int i = 0; i < user; i++)
    {
        c[i] = a[i] + b[i];

        cout << c[i] << " ";
    }
}