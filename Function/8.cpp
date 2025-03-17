#include <iostream>
using namespace std;
int sum(int d, int e,int f)
{  int temp;
 
  if (d > e && a > f)
  {
    cout << " First value max is : " << a;
    
  }
  else if (e > f && e > d)
  {
    cout << "second value max is : " << b;
    
  }
  else{
    cout << "Third value max is : " << c;

  }
  
   return 0;
 
}
int main()
{
    int a, b,c;

    cout << "Enter The First value : ";
    cin >> a;
    cout << "Enter The Second value : ";
    cin >> b;
    cout << "Enter The Second value : ";
    cin >> c;
    
    cout <<"--------------------------\n";
    
    sum(a,b,c);
  
}