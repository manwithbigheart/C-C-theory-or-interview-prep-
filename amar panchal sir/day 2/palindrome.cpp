#include <iostream>
// beaking digits
using namespace std;
int main()
{
  int number;
  int rno = 0;

  cout << "\nEnter a number:";
  cin >> number;
  int tempNo = number;
  while (tempNo > 0)
  {
    int digit = tempNo % 10;

    tempNo = tempNo / 10;
    cout << "\nnumber:" << tempNo << "\tdigit:" << digit;

    // 5 blank space
    rno = rno * 10 + digit;
  }
  cout << "\n"
       << rno << " is the reverse number";

  if (rno == number)
  {
    cout << "\n Palindrome";
  }
  else{
    cout << "\n Not a palindrome";
  }
  
}
