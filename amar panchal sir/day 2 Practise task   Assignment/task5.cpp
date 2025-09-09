#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{

  int number, digit, even_count = 0, odd_count = 0;
  cout << "Enter the number : ";
  cin >> number;
  while (number > 0)
  {
    digit = number % 10;
    number = number / 10;
    if (digit < 0)
    {
      break;
    }
    else if (digit % 2 == 0)
    {
      even_count++;
    }
    else
    {
      odd_count++;
    }
  }
  cout << "\nNumber of even numbers : " << even_count << endl;
  cout << "\nNumber of odd numbers : " << odd_count << endl;
}