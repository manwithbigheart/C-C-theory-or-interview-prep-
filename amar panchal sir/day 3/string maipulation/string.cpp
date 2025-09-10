
#include <iostream>
using namespace std;
int main()
{
  string line;
  int i, D_count = 0, count_Alpha = 0, count_alpha = 0;
  cout << "Enter data:";
  getline(cin, line);

  // ------------------------------------------------------------------------------

  for (i = 0; line[i] != '\0'; i++) // accessing by index
  {
    if (line[i] >= '0' && line[i] <= '9') // 0 to 9 digits
      D_count++;
    else if (line[i] >= 'A' && line[i] <= 'Z') // A to Z alphabets
      count_Alpha++;
    else if (line[i] >= 'a' && line[i] <= 'z')
    {
      count_alpha++;
    }
  }

  cout << "\nTotal digits in string are:" << D_count;
  cout << "\nTotal alphabets in string are:" << count_Alpha;
  cout << "\nTotal alphabets in string are:" << count_alpha;

  // ------------------------------------------------------------------------------

}
