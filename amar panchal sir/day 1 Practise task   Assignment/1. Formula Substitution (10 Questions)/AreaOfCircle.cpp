#include<iostream>
#include<math.h>
using namespace std;

int main(){
  double area;
  double radius;
  double pi = M_PI;
  
  cout << "\n Enter the radius of circle you want to find area of : " << endl;
  
  cin >> radius ;

  area = pi*radius*radius;

  cout << "The area of given circle  is : " << area << endl;
}