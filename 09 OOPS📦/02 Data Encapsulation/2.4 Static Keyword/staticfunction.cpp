#include <iostream>
using namespace std;
class fun
{
public:
    static void staticvar()
    {
        int x = 10;
        cout <<"Static with function: " << x;
      
    }
};

int main()
{

 fun::staticvar();

    return 0;
}