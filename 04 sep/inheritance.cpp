#include <iostream>
#include <string>
using namspace std;


class parent{
  int value;
  public:

  Parent(int x){
    value = x;
    cout << " parent constructor called " << value << endl;
  }
  Parent(){
    
  }
  void setValue(int xy){
      value = xy;
  }
  
  int getValue(){
      return value;
  }

};


class Child{
  string name;

public:
  Child(string x)
  {
    name = x;
    cout << " Child constructor called " << name << endl;
  }
  Child()
  {
  }
  void setValue(int xy)
  {
    name = xy;
  }

  string getValue()
  {
    return name;
  }
};

int main(){
    Parent p1(34);
    p1.getValue();
}