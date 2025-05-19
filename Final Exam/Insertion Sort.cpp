#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter The Size : ";
    cin >> size;
    int arr[size];
    // Before :  50 40 20 10 30
    for (int i = 1; i < size; i++)
    {
        int key = arr[i]; // 40
        int j = i - 1;    // arr[0] =  50

        while (j >= 0 && arr[j] > key) // 40 > 50
        {
            // 50 50 20 10 30
            arr[j + 1] = arr[j]; // arr[0 + 1] =  50
            j--;                 // arr[0] = index 0
        }
        arr[j + 1] = key; // // arr[0 + 1] =  40
         // After :  40 50 20 10 30
        cout << "--------------------------------------" << endl;
        cout << "Insertion Sort : " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }