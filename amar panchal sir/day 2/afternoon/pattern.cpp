
#include <iostream>
//
using namespace std;
int main()
{
  int i, j;

  for (i = 1; i <= 10; i=i+2) // controller
  {
    for (j = 1; j <= i; j++) // printer
    {
      cout << "X";
    }
    cout << "\n"; // next line
  }
}
