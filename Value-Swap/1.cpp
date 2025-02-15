#include <iostream>  
using namespace std; 
int main() {
    // Use 3rd Variable //

    // a = 48  b = 52  c = [Emtey] 
    // c = a , c = 48  a = [Emtey]
    // a = b , a = 52  b = [Emtey]
    // b = c , b = 48
    int a,b,c;
    cout << "Enter Velue of A : ";
    cin >> a;
    cout << "Enter Velue of B : ";
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "====================================" << endl;
    cout << "Swap Velue of a : "<< a << endl;
    cout << "Swap Velue of b : "<< b << endl;
    return 0; 
}
