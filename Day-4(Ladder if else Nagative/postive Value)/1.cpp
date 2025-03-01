#include <iostream>
using namespace std;
int main(){
//   ?? ladder if else Only use else if with out nested if else not use one if else multiple if else created
    //     Write a Program to find if a given number is neutral or not using a ladder if else.
    // For example,
    // Input:
    // Enter any number: -9
    // Output:
    // This number is Negative

    int a;
    cout << "Enter any number : ";
    cin >> a;
    if (a < 0)
    {
        cout << "This number is Negative : " << a;
    }
    else if (a == 0)
    {
        cout << "This number is Neutral : " << a;
    }
    else
    {
        cout << "This number is Positive : " << a;
    }
}
