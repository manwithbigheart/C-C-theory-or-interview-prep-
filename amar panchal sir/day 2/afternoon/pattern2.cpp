
#include <iostream>
//
using namespace std;
int main()
{

// --------------------------------------------------------------------
  // char x,i;

  // for (i = 1; i <= 'e'; i++) // controller
  // {
  //   for (x = 'a'; x <= i; x++) // printer
  //   {
  //     cout << x;
  //   }
  //   cout << "\n"; // next line
  // }

// -----------------------------------------------------------------------------------




  int i, j;

  for (i = 1; i <= 5; i++) // controller
  {
    for (j = 1; j <= i; j++) // printer
    {
      cout << "X";
    }
    cout << "\n"; // next line
  }
}
