#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks >= 0 && marks <= 100)
    {
        if (marks >= 90)
        {
            cout << "Excellent" << endl;
        }
        else if (marks >= 70)
        {
            cout << "Very Good" << endl;
        }
        else if (marks >= 50)
        {
            cout << "Good" << endl;
        }
        else{
            cout << "Fail" << endl;

        }
    }

    else
    {
        cout << "Envalid Marks" << endl;
    }
    
}