#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    int arr[size];
    cout << "========== InsertionSort Sort ============" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }

    // 50 40 20 10 30
    for (int i = 1; i < size; i++)
    {
        int key = arr[i]; // 50
        int j = i - 1; // 40

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        cout << "Pass(" << i + 1 << ") : ";
        for (int k = 0; k < size; k++)
        {
            if (i == k)
            {
                cout <<"[" << arr[k]<<"]" << " " ;
            }
            else{

            }
            
            cout << arr[k] << " " ;
        }
        cout<< endl;
    }
    cout << "----------------------------------" << endl;
    cout << "InsertionSort Sort: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}