#include<iostream>
using namespace std;
 template<typename T,typename F>
 // This data type use in multiple data type create multiple typename
void fun(T a,F b){
    cout <<"Template : " << a;
    cout <<"Template : " << b;
 }
  
int main()
{
    
 fun(5,10.5);
}