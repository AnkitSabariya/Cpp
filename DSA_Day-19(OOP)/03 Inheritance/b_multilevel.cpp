#include <iostream>
using namespace std;

// Parent class (Base Class)
class parent
{
public:
    void show()
    {
        cout << "This is the Parent class" << endl;
    }
};

// Child class (Derived Class) - Inheriting from Parent
class child : public parent
{
public:
    void display()
    {
        cout << "This is the First Child class" << endl;
    }
};
class child1 : public child
{
public:
    void display1()
    {
        cout << "This is the Second Child class" << endl;
    }
};

int main()
{
    child1 obj;
    obj.show();
    obj.display();
    obj.display1();
}
