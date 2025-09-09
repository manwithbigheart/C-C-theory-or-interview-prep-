#include<iostream>
using namespace std;

int main(){
int year;

cout << " Enter the year to check wether Leap year or Not : ";

cin >> year;

if((year%4 == 0 && year%100 != 0) || year%400==0){

  cout << year << " year is leap year";

}else {
  cout << year << " year is not leap year";
}

}