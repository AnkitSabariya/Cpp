#include <iostream>
using namespace std;
void fun(int *ptr)
{
    cout << "Value of pointer: " << *ptr << endl;
    cout << "Address of pointer: " << ptr << endl;
}

int main()
{
    int a = 5;
    int *ptr = &a;
    fun(ptr);
    return 0;
}