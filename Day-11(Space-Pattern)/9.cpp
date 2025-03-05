#include <iostream>
using namespace std;

int main()

{
    // 1 2 3 4 5
    // 1 2 3 4 -
    // 1 2 3 ---
    // 1 2 -----
    // 1 -------
    // 1 -------
    // 1 2 -----
    // 1 2 3 ---
    // 1 2 3 4 -
    // 1 2 3 4 5
    for (int i = 5; i >= 1; i--)
    { // Left side
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
      
        cout << endl;
    }
    // Second Row
    for (int i = 1; i <= 5; i++)
    { // Left side
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
      
        cout << endl;
    }
}
