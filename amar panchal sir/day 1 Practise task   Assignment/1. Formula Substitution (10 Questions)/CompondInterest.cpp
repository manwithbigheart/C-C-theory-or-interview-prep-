#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  double P;
  double R;
  double tim;
  cout << "Enter Principle amount : ";
  cin >> P;
  cout << "Enter Principle Rate of Interest : ";
  cin >> R;
  cout << "Enter Principle Time : ";
  cin >> tim;
  cout << " \n Net Compund interst is  : " << P * pow((1 + R / 100), tim) << endl;
}