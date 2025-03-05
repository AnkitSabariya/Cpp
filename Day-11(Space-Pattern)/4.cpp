#include <iostream>
using namespace std;

int main()
{
    // 1 0 1 0 1
    //   0 1 0 1
    //     1 0 1
    //       0 1
    //         1
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s < i; s++)
        {
            cout << "- ";
        }

        for (int j = i; j <= 5; j++)
        {
            if (j % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}
