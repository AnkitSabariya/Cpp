#include <iostream>
using namespace std;
// depend on Class object call decide when runtime this overridding other class.
// this is Dynamic
class Ankit
{

    // Constructor overridding
public:
    string name;
    void get()
    {
        cout << "I'm Parrent.." << endl;
    }
};
// Function overlridding
class Function : public Ankit
{
public:
    void get()
    {
        cout << "I'm Child..." << endl;
    }
};
int main()
{
   Ankit a;
   a.get();
   //---- OR----- 
   Function f;
   f.get(); 
}