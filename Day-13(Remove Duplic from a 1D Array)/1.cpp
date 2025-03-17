#include <iostream>
using namespace std;

int main()
{ // Ascending Order //
    int size, min, i;
    cout << "Enter Array Size : ";
    cin >> size;
    int box[size];
    cout << "--------------------Enter Value [0 to " << size << "]-----------------------  \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value [" << i << "] : ";
        cin >> box[i];
    }

    if (box[i] == box[i + 1])
    {
        box[i] = box[i + 1];
    }
    i--;

    cout << "----------------------\n";
    cout << "|| Output: ||\n";
    cout << "Ascending Order :";
    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }
    cout << "\n";
    cout << "----------------------\n";

    cout << "Minimum Value is : " << box[0] << endl;
    cout << "Maximum Value is : " << box[size - 1];
}