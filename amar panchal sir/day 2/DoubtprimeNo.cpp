// prime

#include <iostream>
using namespace std;
int main()
{
  int number = 100, i;
  // set
  // cout << "\nEnter a number:";
  // cin >> number;
  
  for (i = 2; i < number; i++)
  {
    bool flag = true;
    if (number % i == 0) // signal
    {
      flag = false; // reset
      cout << number << " is prime num";
      continue;
    }
    
  }
  // if (flag) // flag==true
  //   cout << endl
  //        << number << " yes it is prime";
  // else
  //   cout << endl
  //        << number << " no it is not prime";
}
