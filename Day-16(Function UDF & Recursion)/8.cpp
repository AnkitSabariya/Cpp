#include <iostream>
using namespace std;
int findMax(int d, int e, int f) 
{
  if (d > e && d > f)
  {
    return d;
  }
  else if (e > f)
  {
    return e;
  }
  else
  {
    return f;
  }
  //---------- Alternative--------------- //
  // int max = d; 

  // if (e > max)
  //     max = e;
  
  // if (f > max)
  //     max = f;

  // return max;
   //------------------------------------- //
}

int main()
{
  int a, b, c;

  cout << "Enter the first value: ";
  cin >> a;
  cout << "Enter the second value: ";
  cin >> b;
  cout << "Enter the third value: ";
  cin >> c;

  cout << "--------------------------\n";

  findMax(a, b, c);
  cout << "Maximum value is: " << findMax(a, b, c);

  return 0;
}
