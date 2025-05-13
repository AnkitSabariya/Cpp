#include <iostream>
using namespace std;

int main()
{
    int size, swapCount = 0;
    cout << "Enter Array Size: ";
    cin >> size;

    int arr[size];

    // Input elements
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    // Selection Sort
    // 50 40 10 20 30
    for (int i = 0; i < size; i++)
    {
        int minIndex = i; // 0 | 1 | 2 | 3 | 4

        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[minIndex]) // 50<50 ❌ | 40<50 ✅ | 10<40 ✅ | 20<10 ❌ | 30<10 ❌
            {
                minIndex = j; // 2 | 2 | 2
                // Final minindex[2] = 10
            }
        }
        // Swap only if needed
        if (minIndex != i)
        {
            swapCount++;

            int temp = arr[i];      // temp = arr[0] = 50
            arr[i] = arr[minIndex]; // arr[0] = arr[2](10)
            arr[minIndex] = temp;   // arr[2] = arr[0](50)
        }

        // Current pass output
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < size; k++)
        {
            if (k == i)
                cout << "[" << arr[k] << "] ";
            else
                cout << arr[k] << " ";
        }
        cout << endl;
    }
    cout << "Total Swaps: " << swapCount << endl;
    cout << "----------------------------------" << endl;
    // Final output
    cout << "SelectionSort: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
