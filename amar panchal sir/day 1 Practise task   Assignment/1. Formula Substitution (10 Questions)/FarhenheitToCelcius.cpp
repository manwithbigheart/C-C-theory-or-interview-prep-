#include<iostream>
using namespace std;

int main (){
  float Fahrenheit;
  float Celsius;

  cout << " Enter the temp in Fahrenheit :";
  cin >> Fahrenheit;

  Celsius= (Fahrenheit-32)*(5.0/9);

  cout << " The Temp unit in Celsius is : " <<  Celsius;
}