#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int a = 5;
    ptr = &a;
    cout << "Address of pointer : " << ptr << endl;
    cout << "pointer in value  " << *ptr;

    
}