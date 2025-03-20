#include<iostream>
using namespace std;
void fun(int n){
    n = n +10;
}

int main()
{
    int a =5;
    cout <<"Before a: "<<a << endl;
    fun(a);
    cout <<"After a: "<<a << endl;


    return 0;
}