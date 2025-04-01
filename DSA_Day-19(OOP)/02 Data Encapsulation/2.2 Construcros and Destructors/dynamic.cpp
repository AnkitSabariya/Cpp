#include <iostream>
using namespace std;
class ankit
{
    int x;

public:
    int set(int x)
    {
        this->x = x;
    }
    int get()
    {

        return x;
    }
};
int main()
{

    ankit *b = new ankit;
    b->set(10);
    cout << "point " << b->get();
}