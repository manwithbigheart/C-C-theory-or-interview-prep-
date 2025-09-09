#include<iostream>
using namespace std;

int main(){
  int no1;
  int no2;
  int no3;

  cout << "Enter the no1: " <<endl;
  cin >> no1;
  cout << "Enter the no2: " <<endl;
  cin >> no2;
  cout << "Enter the no3: " <<endl;
  cin >> no3;

  if (no1>no2 && no1>no3){
    cout << "Largest no is n1 : " << no1 << endl;
  }else if (no2 > no3){
    cout << "Largest no is n2 : " << no2 << endl;
  }else{
    cout << "Largest no is n3 : " << no3 << endl;
  }
  
}