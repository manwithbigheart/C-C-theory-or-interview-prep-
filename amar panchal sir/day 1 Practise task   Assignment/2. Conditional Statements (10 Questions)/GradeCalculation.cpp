#include<iostream>
using namespace std; 
int main(){
  int marks;

  cout << " Enter the marks " << endl;
  cin >> marks;

  if(marks > 90){
    cout << " your Grade is A " << endl;
  }else if (marks > 80 ){
    cout << " your Grade is B " << endl;
  }else if (marks > 70){
    cout << " your Grade is c " << endl;
  }
}