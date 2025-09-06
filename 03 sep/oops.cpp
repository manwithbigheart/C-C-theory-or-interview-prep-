#include<iostream>
#include<string>
using namspace std;


class teacher(){
  private:
  double salary;

  public:
  string name;
  string dept;
  string subject;

  void change_sub(string sub){
    subject = sub;
  };


  teacher(string n, string d, string s){
    name = n;
    dept = d;
    subject = s;
  }

}




int main {

  return 0;
}