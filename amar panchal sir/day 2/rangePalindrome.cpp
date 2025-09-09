#include <iostream>
// beaking digits
using namespace std;
int main()
{

  int number;

  for (number = 100; number <= 400; number++)
  {
    int rno = 0;
    int tempNo = number;

    while (tempNo > 0)
    {
      int digit = tempNo % 10;
      tempNo = tempNo / 10;
      rno = rno * 10 + digit;
    }

    if (rno == number)
    {
      cout << rno << endl;
    }
  }
}
