#include <iostream>
using namespace std;

// Parent class (Base class)
class Parent {
public:
    void show() {
        cout << "This is the Parent class" << endl;
    }
};

// First child class (Derived from Parent)
class Child1 : public Parent {
public:
    void show() {
        cout << "This is the First Child class" << endl;
    }
};

// Second child class (Derived from Parent)
class Child2 : public Parent {
public:
    void show() {
        cout << "This is the Second Child class" << endl;
    }
};

// Subchild class (Inherits from both Child1 and Child2)
class SubChild : public Child1, public Child2 {
public:
    void display() {
        cout << "This is the SubChild class" << endl;
    }
};

int main() {
    // Creating an object of SubChild class
    SubChild obj;

    // Ambiguity occurs here, so we need to specify the base class using the membership label operator
    obj.Child1::show();  // Calls show() from Child1
    obj.Child2::show();  // Calls show() from Child2

    return 0;
}
