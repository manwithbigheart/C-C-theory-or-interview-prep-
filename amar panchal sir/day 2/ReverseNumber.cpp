#include <iostream>
// beaking digits
using namespace std;
int main()
{
  int number;
  int rno = 0;

  cout << "\nEnter a number:";
  cin >> number;
  while (number > 0)
  {
    int digit = number % 10;

    number = number / 10;
    cout << "\nnumber:" << number << "\tdigit:" << digit;
    

    // 5 blank space
    rno = rno * 10 + digit;
  }
  cout <<"\n" << rno << " is the reverse number";
}
