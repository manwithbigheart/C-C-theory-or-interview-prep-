#include <iostream>
#include <cmath>

using namespace std;
int main()
{
 int n = 5;
 int fact = 1;
 for (int i = 1; i <= n; i++)
 {
  fact *= i;
  
 }
 cout << " factorial is : "<<fact << endl;
}
