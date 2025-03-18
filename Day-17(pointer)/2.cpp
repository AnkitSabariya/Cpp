#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    // *variable_name to Create pointer &address of pointer
    // * find pointer value and more pointer add more *
    // without * find Address
    // int *ptr = &a; Shortform
    int *ptr;
    ptr = &a;

    int **ptr2;
    ptr2 = &ptr;

    int ***ptr3;
    ptr3 = &ptr2;


    cout << "Address of pointer : " << ptr << endl;
    cout << "pointer in value  " << *ptr << endl;
    cout <<"------------------------------"<< endl;
    cout << "Address of 2 pointer : " << ptr2 << endl;
    cout << "2 pointer in value  " << **ptr2 << endl;
    cout <<"------------------------------"<< endl;
    cout << "Address of 3 pointer : " << ptr3 << endl;
    cout << "3 pointer in value  " << ***ptr3 << endl;
    cout <<"------------------------------"<< endl;

    
}