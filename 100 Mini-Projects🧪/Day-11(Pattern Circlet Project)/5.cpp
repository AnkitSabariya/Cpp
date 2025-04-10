#include <iostream>
using namespace std;

int main()
{
    //         5
    //       4 5 4
    //     3 4 5 4 3
    //   2 3 4 5 4 3 2
    // 1 2 3 4 5 4 3 2 1

    for (int i = 5; i >= 1; i--)
    {
        for (int s = 1; s < i; s++)
        {
            cout << "- ";
            
        }
        // Left
        
        for (int j = i; j <= 5; j++)
        {
            cout << j<<" ";
        }
        // Right  // (j > i -1 || j >=i ) alternative
          for (int j = 4; j >= i; j--) //(5[i]-1) = 4 (4 > 4) p(-)
        {                               //(4[i]-1) = 3 (4 > 3) p(4) 3 not include because = not 
            cout << j<<" ";             //(3[i]-1) = 2 (4 > 2) p(4,3)
        }                               //(2[i]-1) = 1 (4 > 1) p(4,3,2)
        cout << endl;                   //(1[i]-1) = 0 (4 > 0) p(4,3,2,1)
    }
   
}
