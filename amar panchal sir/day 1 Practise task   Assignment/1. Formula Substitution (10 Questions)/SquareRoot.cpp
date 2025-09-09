#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  double x1;
  double x2;
  double y1;
  double y2;

  cout << "\n enter x1: " << endl;
  cin >> x1;
  cout << "\n enter x2: " << endl;
  cin >> x2;
  cout << "\n enter y1: " << endl;
  cin >> y1;
  cout << "\n enter y2: " << endl;
  cin >> y2;

  cout << " square root is : " << sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}