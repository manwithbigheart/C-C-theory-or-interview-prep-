#include <iostream>
// 1/2+3/4+5/6+7/8...+n
using namespace std;
int main()
{
  float n, i, sum = 0.0f;
  
  cout << "\nEnter number:";
  cin >> n;

  bool flag = true;


  for (i = 1; i <= 2 * n; i = i + 2)

    // flag = true;

    if (flag == true){
    cout << i << "/" << (i + 1) << " -";
    sum += ((i) / (i + 1));
    flag = false;
  }
  else if (flag == false)
    {
      cout << i << "/" << (i + 1) << " ";
      sum -= ((i) / (i + 1));
      flag = true;
    }

  cout << "\nSum of series is:" << sum;
}
