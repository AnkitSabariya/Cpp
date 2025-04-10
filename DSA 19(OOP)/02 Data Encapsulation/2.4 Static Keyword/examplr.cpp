#include <iostream>
using namespace std;
class fun
{ // static keyword used to ram in store value without that run delete and run 
    // without static always ans 0 with static x in +++
public:
    void staticvar()
    {
        static int x = 0;
        cout << "Static with function: " << x << endl;
        x++;
    }
};

int main()
{
    fun a;
    a.staticvar();
    a.staticvar();
    a.staticvar();

    return 0;
}