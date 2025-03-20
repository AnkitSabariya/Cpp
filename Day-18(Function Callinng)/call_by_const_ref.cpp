#include<iostream>
using namespace std;
void fun(const int &n){
    // n = n +10; this error
}

int main()
{
    int a =5;
    cout <<"Before a: "<<a << endl;
    fun(a);
    cout <<"After a: "<<a << endl;
    // Output:
    // Error hai..!!


    return 0;
}