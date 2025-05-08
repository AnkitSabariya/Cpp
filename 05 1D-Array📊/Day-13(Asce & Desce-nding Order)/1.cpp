#include <iostream>
using namespace std;

int main()
{ // Ascending Order //
    int size;
    int box[size];
    int min = box[0];
    cout << "Enter Array Size : ";
    cin >> size;

    cout << "--------------------Enter Value [0 to " << size << "]-----------------------  \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value [" << i << "] : ";
        cin >> box[i];
    }


    for (int i = 0; i < size; i++)
    {
        if (box[i] < min)
        {
            min = box[i];
        }
    }
    cout <<"-------------------------------" << endl;
    cout << "Minimum Value is : " << min << endl;
}