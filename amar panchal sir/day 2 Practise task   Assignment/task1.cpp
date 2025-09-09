#include<iostream>
using namespace std;

int main(){
  float input;
  cout << "Enter your dog's age in human years: ";
  cin >> input;
  float age;
  if (input == 1)
  {
    cout << "Your dog's age in dog years is: 10.5" <<endl;
  }
  else if (input == 2){
    cout << "Your dog's age in dog years is: 21" << endl;
  }
  else if(input > 2){
    
    age = (10.5*2)+(input-2)*4;
    cout << "Your dog's age in dog years is:" << age << endl;
  }
  
}