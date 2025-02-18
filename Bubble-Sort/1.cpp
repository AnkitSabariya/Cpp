#include <iostream>
using namespace std;
int main()
{
    // Without Use 3rd Variable //

    int size;
    cout << "Enter Size of Arry : ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value" << " [" << i << "] : ";
        cin >> arr[i];
    }


    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j <= size - i -1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j + 1];
              
            }
            
        }
    }
    cout << "Sorted Array (Ascending Order): ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;

    return 0;
}
