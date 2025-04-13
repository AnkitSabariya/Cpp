#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50}; // Static allocation

    cout << "Static Memory Allocation Example\n";
    cout << "--------------------------------\n";
    cout << "Array Values and Their Memory Addresses:\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Index [" << i << "] = " << arr[i]
             << " \t(Address: " << &arr[i] << ")" << endl;
    }

    cout << "\n✅ This array uses static memory allocation." << endl;
    cout << "   ➤ Size is fixed at compile time." << endl;
    cout << "   ➤ Memory is allocated on the stack." << endl;
    cout << "   ➤ Fast access but not resizable at runtime." << endl;

    return 0;
}
