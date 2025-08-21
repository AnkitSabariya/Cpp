#include <iostream>
#include <algorithm> // for sort()
using namespace std;

int main()
{
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    int box[size];

    cout << "-------------------- Enter Values --------------------\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value [" << i << "] : ";
        cin >> box[i];
    }

    // Step 1: Sort array
    sort(box, box + size);

    // Step 2: Remove duplicates
    int temp[size];
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == 0 || box[i] != box[i - 1]) // unique check
        {
            temp[j++] = box[i];
        }
    }

    // Step 3: Show Output
    cout << "----------------------\n";
    cout << "Unique Values (After Removing Duplicates): ";
    for (int i = 0; i < j; i++)
    {
        cout << temp[i] << " ";
    }
    cout << "\n----------------------\n";

    return 0;
}
