#include <iostream>
using namespace std;
int main()
{
  int a, b, c;

  cout << " Enter first numbers  ";
  cin >> a;
  cout << " Enter Second numbers ";
  cin >> b;
  cout << " Enter Third numbers ";
  cin >> c;

  if (a > b && a > c)
  {
    cout << a << " is the largest number" << endl;
  }
  else if (b > a && b > c)
  {
    cout << b << " is the largest number" << endl;
  }
  else if (c > a && c > b)
  {
    cout << c << " is the largest number" << endl;
  }
  else
  {
    cout << "entered number are equal";
  }
}