#include <iostream>
using namespace std;
int main(){
    int a = 5,b = 3;

    cout << "Sum is: " << a << " + " << b << " = " << (a + b) << endl;
    cout << "Minus is: " << a << " - " << b << " = " << (a - b) << endl;
    cout << "Multiplication is: " << a << " * " << b << " = " << (a * b) << endl;
    cout << "Slash is: " << a << " / " << b << " = " << (a / b) << endl; // Integer division
    cout << "Percent is: " << a << " % " << b << " = " << (a % b) << endl; // Modulus operator

    return 0;
}