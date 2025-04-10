#include <iostream>
using namespace std;
void arr(int user[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "[" << i << "] " << user[i];
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    arr(a);
    return 0;
}