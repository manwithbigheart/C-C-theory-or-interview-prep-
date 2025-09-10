
#include <iostream>
using namespace std;
int main()
{
  string word;
  int i, j;
  bool flag = true;

  cout << " enter input: ";
  cin >> word;

  for (j = 0; word[j] != '\0'; j++)

    j = j - 1;

  for (i = 0; i < j; i++, j--)
  {
    if (word[i] != word[j])
    {
      flag = false;
      break;
    }
  }

  cout << word << " is palindrome :" << (flag ? "yes" : "no");
}
