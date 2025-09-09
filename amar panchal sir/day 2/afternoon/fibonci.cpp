#include <iostream>
#include <cmath>
// beaking digits
using namespace std;
int main()
{
  int number;
  int sum = 0;

  cout << "\nEnter a number:";
  cin >> number;
  int tempNo = number;

  while (tempNo > 0)
  {
    int digit = tempNo % 10;

    tempNo = tempNo / 10;
    cout << "\nnumber:" << tempNo << "\tdigit:" << digit;

    sum += pow(digit, 3);
  }

  if (sum == number)
  {
    cout << "\n is a armstrong Number";
  }
  else
  {
    cout << "\n is Not a armstrong Number";
  }
}
