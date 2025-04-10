#include<iostream>
using namespace std;

// Abstract Class (Interface)
class Web {
public:
    virtual void navbar() = 0;
    virtual void header() = 0;
    virtual void main() = 0;
    virtual void article() = 0; // pure virtual function
    virtual void footer() = 0;
};

// Derived Class (Implementing Interface)
class App : public Web {
public:
    void navbar()  {
        cout << "I am Navbar" << endl;
    }
    
    void header()  {
        cout << "I am Header" << endl;
    }
    
    void main()  {
        cout << "I am Main Content" << endl;
    }
    
    void article()  {
        cout << "I am Article Section" << endl;
    }
    
    void footer()  {
        cout << "I am Footer" << endl;
    }
};

int main() {
    App myApp;  // Object of Derived Class
    myApp.navbar();
    myApp.header();
    myApp.main();
    myApp.article();
    myApp.footer();

    
}
