#include <iostream>
using namespace std;

int main()
{
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1

    for (int i = 1; i <= 5; i++)
    { // Left side
        for (int s = 5; s > i; s--)
        {
            cout << "- ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // Right side

        for (int j = i - 1; j >= 1; j--) // 1 - 1 (0  >= 1) print(-)
        {                                // 2 - 1 (1  >= 1) print(1)
            cout << j << " ";            // 3 - 1 (2  >= 1) print(2,1)
                                         // 4 - 1 (3  >= 1) print(3,2,1)
        }                                // 5 - 1 (4  >= 1) print(4,3,2,1)
        cout << endl;
    }
}
