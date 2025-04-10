#include <iostream>
using namespace std;
 // find nagative from 1D array
int main()
{
    int user;
    cout << "Enter The size of Array: ";
    cin >> user;
    if (user <= 0)
    {
        cout << "Invalid size! Please enter a positive number." << endl;
    }
    int box[user];
    // Create Array
    for (int i = 0; i < user; i++)
    {
        cout << "Enter The Value [" << i << "] : ";
        cin >> box[i];
    }
    // Find Nagative frome Array
    cout << "Negative elements frome an Array: ";
    for (int i = 0; i < user; i++)
    {
        if (box[i] < 0)
        {
            cout << box[i] << " ";
        }
    }

    return 0;
}