#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int[5];

    cout << "📍 Before delete:\n";
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = (i + 1) * 10;
        cout << "ptr[" << i << "] = " << ptr[i] << "\tAddress: " << &ptr[i] << endl;
    }

    // 🗑️ Delete memory
    delete[] ptr;
    ptr = nullptr; // ✅ Important to make pointer safe

    cout << "\n🧹 After delete:\n";
    if (ptr == nullptr)
    {
        cout << "✅ Memory deleted. Pointer is now nullptr. Can't access values safely.\n";
    }
    else
    {
        // This should never run
        for (int i = 0; i < 5; i++)
            cout << "ptr[" << i << "] = " << ptr[i] << "\tAddress: " << &ptr[i] << endl;
    }

    return 0;
}
