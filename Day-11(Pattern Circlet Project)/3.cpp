/**
 * The function prints a pattern of numbers in a pyramid shape with decreasing numbers from 5 to 1.
 */
#include <iostream>
using namespace std;

int main()
{
    //         5
    //       4 5
    //     3 4 5
    //   2 3 4 5
    // 1 2 3 4 5
    for (int i = 5; i >= 1; i--)
    {
        for (int s = 1; s < i; s++)
        {
            cout << "- ";
        }

        for (int j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
