#include <iostream>
using namespace std;

int main()
{
  int num1;
  cout << "Enter the Number ";
  cin >> num1;
  if (num1 > 0)
  {
    cout << " Entered Number is positive number.";
  }
  else if (num1 < 0)
  {
    cout << " Entered Number is negative number.";
  }
  else
  {
    cout << " Entered Number is zero.";
  }
}