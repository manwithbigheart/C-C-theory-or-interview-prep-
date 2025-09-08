#include <iostream>
using namespace std;

int main()
{
  int no1;

  cout << "Enter the no1: " << endl;
  cin >> no1;

  if (no1 > 0)
  {
    cout << "Number is positive : " << no1 << endl;
  }
  else if (no1 < 0)
  {
    cout << "Number is negaitve: " << no1 << endl;
  }
  else
  {
    cout << "no is zero " << no1 << endl;
  }
}