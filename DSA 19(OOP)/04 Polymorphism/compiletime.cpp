#include <iostream>
using namespace std;
// depend on contex decide when compile this overloadding mins data type in value
// this is static
class Ankit
{ 

    // Constructor overloading
public:
    string name;
    Ankit()
    {
        cout << "no parameters.." << endl;
    }
    Ankit(string name)
    {
        this->name = name;
        cout << "parameters.." << name << endl;
    }
};
//Function overloading
class Function{
    public:
    void show(int x){
        cout<<"int : " << x << endl;
    }
    void show(float x){
        cout<<"float : " << x << endl;
    }
};
int main()
{
    Ankit a1("Ankit");
    Ankit a2;
    cout <<"=======================" << endl;
    Function f1;
    f1.show(2.5f);

}