#include<iostream>
using namespace std;

int main(){

  int a, b,c;

  cout << " Enter first numbers to see swaped result ";
  cin >> a;
  cout << " Enter Second numbers to see swaped result ";
  cin >> b;

  c = a;
  a = b;
  b = c;

  cout << " First number = " << a << " second number = " << c;

}