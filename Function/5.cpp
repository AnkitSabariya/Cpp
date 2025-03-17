#include <iostream>
using namespace std;
int sum(int c, int d)
{  int temp;
    temp = c;
    c = d;
    d = temp;
   cout<<"First : " << c;
   cout<<" || Second : " << d;
   return 0;
 
}
int main()
{
    int a, b;

    cout << "Enter The First value : ";
    cin >> a;
    cout << "Enter The Second value : ";
    cin >> b;
    cout <<"--------------------------\n";
    
    sum(a,b);
  
}