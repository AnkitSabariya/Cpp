#include <iostream>
using namespace std;

int main()
{
    int a[5] = {5, 4, 3, 2, 1};
    int *ptr[5];

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &a[i];
        cout << *ptr[i] << " Address of a[" << i << "] : " << ptr << endl;
    }
}