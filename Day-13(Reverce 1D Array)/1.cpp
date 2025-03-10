#include <iostream>
using namespace std;

int main()
{
    int size, rev;
    cout << "Enter the Size Of Array : ";
    cin >> size;
    int box[size];
    cout << "--------------------Enter Value [0 to " << size << "]-----------------------  \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value : ";
        cin >> box[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            rev = box[j];
            box[j] = box[j + 1];
            box[j + 1] = rev;
        }
    }
    cout << "----------------------\n";
    cout << "|| Output: ||\n";
    cout << "Reverse a 1D Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }

    return 0;
}