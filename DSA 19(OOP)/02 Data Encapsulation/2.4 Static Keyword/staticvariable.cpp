#include<iostream>
using namespace std;
class member{
    public:
    static int staticvariable; // static member varible

};
// Defination of static member variable
int member::staticvariable = 30;
int main()
{
    cout <<"Static variable: " << member::staticvariable;
    
}