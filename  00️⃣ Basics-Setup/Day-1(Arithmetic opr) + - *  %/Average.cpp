#include <iostream>
using namespace std;
int main()
{
    //     Write a Program to find an average mark from a total of three subject marks of a
    // student. Each subject’s marks must be given out of 100.
    int a, b, c;
    cout << "Enter maths marks = ";
    cin >> a;
    cout << "Enter english marks = ";
    cin >> b;
    cout << "Enter science marks = ";
    cin >> c;
    if (0 < a && a <= 100 && 0 < b && b <= 100 && 0 < c && c <= 100)
    {

       
        cout << "-----------------" << endl;
        cout << "Output:" << endl;
        float aev = a + b + c;
        cout << "Average mark:" << aev/3.00;

    }
    else
    {
        cout << "Envalid marks...!! " ;
    }
  
}
