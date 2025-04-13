#include <iostream>
using namespace std;

// Function template with two generic types
template <typename T, typename F>
void fun(T a, F b)
{
    cout << "First Value (T) : " << a << endl;
    cout << "Second Value (F): " << b << endl;
}

int main()
{
    fun(5, 10.5);         // int + float
    fun('A', "Ankit");    // char + string
    fun(3.14, true);      // double + bool

    return 0;
}
