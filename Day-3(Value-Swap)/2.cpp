#include <iostream>  
using namespace std; 
int main() {
    // Without Use 3rd Variable //

    // a = 48  b = 52  
    // a = a + b   48(a) + 52(b) = 100(a) 
    // b = a - b   52(b) - 100(a) = 48(b) 
    // a = a - b   100(a) - 48(b) = 52(a) 

    int a,b;
    cout << "Enter Velue of A : ";
    cin >> a;
    cout << "Enter Velue of B : ";
    cin >> b;
    a = a + b;
    b = a + b;
    a = a + b;

    cout << "====================================" << endl;
    cout << "Swap Velue of a : "<< a << endl;
    cout << "Swap Velue of b : "<< b << endl;
    
    
    return 0; 
}
