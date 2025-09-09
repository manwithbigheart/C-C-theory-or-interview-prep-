#include <iostream>
using namespace std;

int main()
{
  int num1;
  cout << "Enter the Age ";
  cin >> num1;
  if (num1 >= 18)
  {
    cout << " Your age is eligible for voting.";
  }
  else if (num1 < 18)
  {
    cout << " Your age is not illgible for voting";
  }
}