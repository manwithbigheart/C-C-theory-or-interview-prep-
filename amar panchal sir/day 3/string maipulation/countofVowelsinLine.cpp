
//count no of vowels and consonat in given line
#include <iostream>

using namespace std;

int main()
{
  string line;
  int vowels = 0, consonants = 0;

  cout << "Enter input: ";
  getline(cin, line); 



  for (char ch : line)
  {
    ch = tolower(ch); 
    if (ch >= 'a' && ch <= 'z')
    { 
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        vowels++;
      else
        consonants++;
    }
  }

  cout << "vowels: " << vowels << endl;
  cout << "consonants: " << consonants << endl;

  return 0;
}
