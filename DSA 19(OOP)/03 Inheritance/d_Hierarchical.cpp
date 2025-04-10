#include <iostream>
using namespace std;

// Parent class (Base Class)
class Parent
{
public:
    void show()
    {
        cout << "This is the Parent class" << endl;
    }
};

// Child class (Derived Class) - Inheriting from Parent
class Child : public Parent
{
public:
    void display1()
    {
        cout << "This is the First Child class" << endl;
    }
};

// Another Child class (Derived Class) - Inheriting from Parent
class Child2 : public Parent
{
public:
    void display2()
    {
        cout << "This is the Second Child class" << endl;
    }
};

int main()
{
    // Creating object of Child class
    Child obj;
    obj.show();      // Calling Parent's method
    obj.display1();  // Calling Child's method
    cout << "-----------------" << endl;

    // Creating object of Child2 class
    Child2 obj2;
    obj2.show();     // Calling Parent's method
    obj2.display2(); // Calling Child2's method

    return 0;
}
