#include <iostream>
using namespace std;

// Class Declaration
class Teacher
{
    // Properties (Data Members)
public:             // Access Specifier (Allows access outside the class)
    string name;    // Teacher's Name
    string subject; // Subject Taught
    string batch;   // Class Batch
    int salary;     // Teacher's Salary
};

int main()
{
    // Object Creation
    Teacher t1; // Creating an object of class Teacher named 't1'

    // Assigning Values to Object Properties
    t1.name = "Kunj Gami";
    t1.subject = "DSA With C++";
    t1.batch = "KUNJ-DSA_WEB_02:00 PM";
    t1.salary = 100000;

    // Displaying Values using Object
    cout << "Teacher's Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Batch: " << t1.batch << endl;
    cout << "Salary: $" << t1.salary << endl;
}
