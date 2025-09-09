#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  int start,end;
  cout << "enter starting point : " <<endl;
  cin >> start ;
  cout << "enter ending point : " << endl;
  cin >> end;

  if (end>0)
  {
    for (int i = start; i <= end ; i++){
      cout << endl <<  i << endl;
    }
  }
  else if (end < 0){
    for (int i = start; i >= end; i--)
    {
      cout << endl << i << endl;
    }
  }
  
}
