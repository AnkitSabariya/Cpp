#include <iostream>
using namespace std;

int main()
{
    int size;
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
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;

        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }

            // Swap only if needed
            if (minIndex != i)
            {
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }

            // Current pass output
            cout << "Pass " << i + 1 << ": ";
            for (int k = 0; k < size; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }

        // Final output
        cout << "Sorted Array: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        return 0;
    }
}
