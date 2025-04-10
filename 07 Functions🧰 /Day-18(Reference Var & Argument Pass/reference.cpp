#include<iostream>
using namespace std;

int main()
{  // datatype &ref_var_name = actual_var_name;
    int a = 10;
    int &b = a;
    cout <<"Print a: "<<a<<endl;
    cout <<"Print b: "<<b<<endl;
    cout <<"-------------------"<<endl;
    b = 20;
    cout <<"Print a: "<<a<<endl;
    cout <<"Print b: "<<b<<endl;


   
}