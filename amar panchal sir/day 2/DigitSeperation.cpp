#include <iostream>
// beaking digits
using namespace std;
int main()
{
  int number;
  int sum = 0;
  cout << "\nEnter a number:";
  cin >> number;
  while (number > 0)
  {
    int digit = number % 10;

    number = number / 10;
    cout << "\nnumber:" << number << "\tdigit:" << digit;
    sum += digit;
    
                                        // 5 blank space

    
  }
  cout << "\n" << sum << " is the total sum";
}
