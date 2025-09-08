#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int a, b, c;
  cout << "enter 3 sides" << endl;
  cin >> a >> b >> c;

  if (a == b && b == c && c == a)
  {
    cout << " equilateral traingle" << endl;
  }
  else if (a == b || b == c)
  {
    cout << "isoceles traingle" << endl;
  }
  else if (b == c || c == a)
  {
    cout << "isoceles traingle" << endl;
  }
  else
  {
    cout << "no side is equal" << endl;
  }
}