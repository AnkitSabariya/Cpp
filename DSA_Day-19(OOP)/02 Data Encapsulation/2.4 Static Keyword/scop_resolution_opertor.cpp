#include <iostream>
using namespace std;

int x = 10;  // Global variable

int main()
{
    int x = 20;  // Local variable (inside main function)

    cout << "First x = " << ::x << endl; // Accessing global x using scope resolution operator (::)
    cout << "Second x = " << x;  // Accessing local x

    return 0;
}
