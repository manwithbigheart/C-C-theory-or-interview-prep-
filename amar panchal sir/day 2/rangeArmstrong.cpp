#include <iostream>
#include <cmath>
// beaking digits
using namespace std;
int main()
{
  int number;
  int sum;

 
  int tempNo;

  for(number =100 ; number<=999;number++){

    tempNo = number;
    int sum = 0;
    while (tempNo > 0)
    {
      int digit = tempNo % 10;

      tempNo = tempNo / 10;

      sum += digit * digit * digit;
    }

  if (sum == number)
  {
    cout << "\n Armstrong Number is " << sum;
  }
  

}
}
