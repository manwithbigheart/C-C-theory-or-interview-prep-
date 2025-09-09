#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()
{

  for (int i = 0; i <= 6; i++)
  {
    if (i == 3 || i == 6)
    {
      continue;
    }
    cout << i << " ";
  }
}