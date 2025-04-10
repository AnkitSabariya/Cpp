#include <iostream>
using namespace std;

class ankit 
{
public:
    int x; 

    // Parameterized Constructor
    ankit(int x)
    {
        this->x = x; 
        cout << "I'm parameterized constructor.. " << x << endl;
    }

    // **Manual Copy Constructor**
    ankit(const ankit &object)
    {
        this->x = object.x; 
        cout << "I'm copy constructor.. " << x << endl;
    }

    void get()
    {
        cout << "Function with print : " << x << endl;
    }
};

int main()
{
    ankit t1(10); 
    ankit t2 = t1; // **Manual Copy Constructor Call**
    cout << "---------------------------------\n";
    t2.get();
}
