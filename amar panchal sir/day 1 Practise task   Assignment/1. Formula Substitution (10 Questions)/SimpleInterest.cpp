#include <iostream>
using namespace std;

int main()
{
  double princi;
  float ROI;
  double time;
  double SI;

  cout << "\n Enter the Principal amount" << endl;

  cin >> princi >> ROI >> time;

  SI = (princi * ROI * time) / 100;

  cout << " Simple interst is : " << SI;
}