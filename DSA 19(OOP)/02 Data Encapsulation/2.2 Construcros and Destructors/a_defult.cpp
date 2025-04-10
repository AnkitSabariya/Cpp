#include <iostream>
using namespace std;

class ankit //  constructor in constructor and class name same
{
public:
    int x; // Public data member

    // Default (Non-Parameterized) Constructor
    ankit()
    {
        cout << "Hi, Im constructor.." << endl;
    }
    // Default (Non-Parameterized) Constructor
    ~ankit()
    {
        cout << "Hi, I DELETE everything" << endl;
    }
};

int main()
{
    ankit t1; // Object creation -> Constructor automatically called
}
