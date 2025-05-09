#include <iostream>
using namespace std;

int main()
{
    int size;
    int box[size];
    cout << "Enter The Array Size : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value [" << i << "] : ";
        cin >> box[i];
    }
    cout << "Passing Sort : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (box[j] > box[j + 1])
            {                                     // box[i] = 57 || box[i + 1] = 43    // 100 = 57 + 43
                box[j] = box[j] + box[j + 1];     // box[i] = 100
                box[j + 1] = box[j] - box[j + 1]; // box[i + 1] = 57
                box[j] = box[j] - box[j + 1];     // 43 = 100 - 57 box[i] = 43
            }
        }
        cout << "Pass " << i << " : " << box[i] << endl;
    }
    cout << "Bubble Sort : ";
    for (int i = 0; i < size; i++)
    {

        cout << box[i] <<  " ";
    }

    return 0;
}