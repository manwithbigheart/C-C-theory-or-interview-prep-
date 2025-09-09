#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
  int i_copy, digit;
  bool flag = true;
  for (int i = 100; i <= 400; i++)
  {
    i_copy = i;

    while (i_copy > 0)
    {
      digit = i_copy % 10;
      i_copy = i_copy / 10;
      if (digit % 2 == 0)
      {
        flag = true;
      }
      else
      {
        flag = false;
        break;
      }
    }
    if (flag == true)
    {
      cout << i << ",";
    }
  }
}