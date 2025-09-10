#include<iostream>
using namespace std;

int main(){

  int size,which,arr;

  cout<< " Enter how many input you want to give";
  cin>> size;

  while (arr < size)
  {
    cout << " Enter the inputs";
    cin >> which;
  }
  
  

  

  for (int i = size - 1; i > 0; i--) // passes
  {
    for (int j = 0; j < i; j++) // sort
    {
      if (a[j] > a[j + 1]) // comapre
      {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }
}