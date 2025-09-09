/* print pattern


     1A 
    12AB 
   123ABC
  1234ABCD
 12345ABCDE

*/
#include <iostream>
    using namespace std;
int main()
{
  int space,num;
  char alph;

  for(space = 5, num = 1, alph = 'A'; space >= 1 && num <=5 && alph <= 'E'; space --,num ++, alph++)
  
  {
    for (int i = 0; i <= space; i++)
    {
      cout << " ";
    }
    for (int i = 1; i <= num; i++)
    {
      cout << num;
    }
    for (int i = 'A'; i <= alph; i++)
    {
      cout << alph;
    }
    
    
    
  }

  
  

  
}
