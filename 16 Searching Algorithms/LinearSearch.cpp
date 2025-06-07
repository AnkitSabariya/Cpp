#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter The Size : ";
    cin >> count;
    int arr[count];
    cout << "========= Linear Search ===========" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }
    // Searching Logic
    int searchkey;
    cout << "Enter The Value To Find Postion : ";
    cin >> searchkey;
    bool found = false;
    for (int i = 0; i < count; i++)
    {

        if (arr[i] == searchkey)
        {
            cout << searchkey << " found at index: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Value not found!" << endl;
    }
}
