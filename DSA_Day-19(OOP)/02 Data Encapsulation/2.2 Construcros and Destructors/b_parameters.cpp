#include <iostream>
using namespace std;

class ankit // Class Name: ankit
{
public:
    int x; // Public data member

    // Parameterized Constructor
    ankit(int x)
    {
        this->x = x; // Assign value to class member x
        cout << "I'm parameterized constructor.. " << x << endl;
    }
    

    // Function to print value of x
    void get()
    {
        cout << "Function with print : " << x;
    }
};

int main()
{
    ankit t1(10); // Object creation -> Constructor automatically called
    cout << "---------------------------------\n";
    t1.get(); // Calling the get() function
}
