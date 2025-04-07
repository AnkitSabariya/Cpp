#include <iostream>
using namespace std;

// Parent class 1 (Base Class)
class Parent
{
public:
    void show()
    {
        cout << "This is the Parent class" << endl;
    }
};

// Parent class 2 (Another Base Class)
class Parent2
{
public:
    void display()
    {
        cout << "This is the Second Parent class" << endl;
    }
};

// Child class - Inheriting from both Parent and Parent2
class Child : public Parent, public Parent2
{
public:
    void display1()
    {
        cout << "This is the Child class" << endl;
    }
};

int main()
{
    Child obj;
    
    // Accessing methods from Parent and Parent2 using scope resolution
    obj.show();         // Calling Parent's method
    obj.display();      // Calling Parent2's method
    obj.display1();     // Calling Child's method

    return 0;
}
