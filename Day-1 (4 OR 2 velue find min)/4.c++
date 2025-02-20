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
    cout << "Enter velue Of a = " << a;
  }
  else if (b < a && b < c && b < d)
  {
    cout << "Min velue" << b;
  }

  else if (c < a && c < b && c < d)
  {
    cout << "Min velue  = " << c;
  }
  else
  {
    cout << "Min velue = " << d;
  }
}
