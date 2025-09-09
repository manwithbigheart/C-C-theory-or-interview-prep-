#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;

  cout << " Enter three parameters :\n";
  cin >> num1 >> num2 >> num3;

  if (num1 == num2 == num3)
  {
    cout << " Triangle is equilateral triangle";
  }
  else if (num1 == num2 || num2 == num3 || num3 == num1)
  {
    cout << " Triangle is isoceles traingle";
  }
  else
  {
    cout << " Triangle is scalen triangle";
  }
}

