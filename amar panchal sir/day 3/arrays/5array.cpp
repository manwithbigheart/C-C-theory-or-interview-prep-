
#include <iostream>
// find min/max
using namespace std;
int main()
{
  int a[] = {5, 10, 3, 8, 20, 1, 7}, size = 7,ind;
  // search the number from array given by user

  // count even and odd elemment total

  int even_count=0,odd_count=0;

  for ( ind = 0; ind < size; ind++)
  {
    if (a[ind] % 2 == 0)
    {
      even_count++;
      
    }
    else
    {
      odd_count++;
      
    }
  }
  cout << even_count << endl;
  cout << odd_count << endl;
}
