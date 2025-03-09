#include <iostream>
using namespace std;

int main()
{ // Ascending Order //
    int size, min = 0;
    cout << "Enter Array Size : ";
    cin >> size;
    int box[size];
    cout << "--------------------Enter Value [0 to " << size << "]-----------------------  \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value [" << i << "] : ";
        cin >> box[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (box[j] > box[j + 1])
            {

                min = box[j];
                box[j] = box[j + 1];
                box[j + 1] = min;
            }
        }
    }
    cout << "----------------------\n";
    cout << "|| Output: ||\n";
    cout << "Ascending Order :";
    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }
    cout << "----------------------\n";
    cout << "\n";
    cout << "Minimum Value is : " << box[0] << endl;
    cout << "Maximum Value is : " << box[size - 1];
}