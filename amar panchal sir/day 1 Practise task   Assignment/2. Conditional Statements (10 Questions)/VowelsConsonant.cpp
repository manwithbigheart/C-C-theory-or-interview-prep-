#include <iostream>
using namespace std;

int main()
{
  char alpha;

  cout << " Enter the alphabet to check vowel or consonat: ";

  cin >> alpha;

  if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
  {
    cout << " Entered alphabet is Vowel";
  }
  else
  {
    cout << "entered alphabet is consonat";
  }
}