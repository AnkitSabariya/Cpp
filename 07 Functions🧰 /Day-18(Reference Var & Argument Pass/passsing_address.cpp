#include <iostream>
using namespace std;
void fun(int *ptr)
{

    cout << "Address of pointer: " << ptr << endl;
}

int main()
{
    int a = 5;
    fun(&a);
    return 0;
}