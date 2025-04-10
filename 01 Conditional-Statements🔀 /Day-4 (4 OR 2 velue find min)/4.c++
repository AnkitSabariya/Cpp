#include <iostream>
using namespace std;
int main()
{
  int a, b, c, d;
  cout << "Enter velue Of a = ";
  cin >> a;
  cout << "Enter velue Of b = ";
  cin >> b;
  cout << "Enter velue Of c = ";
  cin >> c;
  cout << "Enter velue Of a = ";
  cin >> d;
  if (a < b && a < c && a < d)
  {
    cout << "A Min velue = " << a;
  }
  else if (b < a && b < c && b < d)
  {
    cout << "B Min velue" << b;
  }

  else if (c < a && c < b && c < d)
  {
    cout << "C Min velue  = " << c;
  }
  else
  {
    cout << "D Min velue = " << d;
  }
}
