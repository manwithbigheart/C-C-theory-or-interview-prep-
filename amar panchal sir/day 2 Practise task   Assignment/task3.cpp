#include <iostream>

using namespace std;

int main()
{
  string month;
  int date;
  cout << "\n Enter the month(in words lowercase): " << endl;
  cin >> month;
  cout << "\n Enter the date(1-31): " << endl;
  cin >> date;

  if ((month == "march" && date >= 21 && date <= 31) || (month == "april" && date <= 19))
  {
    cout << "Your Astrological sign is : Aries";
  }
  else if ((month == "april" && date >= 20 && date <= 30) || (month == "may" && date <= 20))
  {
    cout << "Your Astrological sign is : Taurus";
  }
  else if ((month == "may" && date >= 21 && date <= 31) || (month == "june" && date <= 20))
  {
    cout << "Your Astrological sign is : Gemini";
  }
  else if ((month == "june" && date >= 21 && date <= 30) || (month == "july" && date <= 22))
  {
    cout << "Your Astrological sign is : Cancer";
  }
  else if ((month == "july" && date >= 23 && date <= 31) || (month == "august" && date <= 22))
  {
    cout << "Your Astrological sign is : leo";
  }
  else if ((month == "august" && date >= 23 && date <= 31) || (month == "september" && date <= 22))
  {
    cout << "Your Astrological sign is : Virgo";
  }
  else if ((month == "september" && date >= 23 && date <= 30) || (month == "october" && date <= 22))
  {
    cout << "Your Astrological sign is : Libra";
  }
  else if ((month == "october" && date >= 23 && date <= 31) || (month == "november" && date <= 21))
  {
    cout << "Your Astrological sign is : Scorpio";
  }
  else if ((month == "november" && date >= 22 && date <= 30) || (month == "december" && date <= 21))
  {
    cout << "Your Astrological sign is : Sagittarius";
  }
  else if ((month == "december" && date >= 22 && date <= 31) || (month == "january" && date <= 19))
  {
    cout << "Your Astrological sign is : Capricorn";
  }
  else if ((month == "january" && date >= 20 && date <= 31) || (month == "february" && date <= 18))
  {
    cout << "Your Astrological sign is : Aquarius";
  }
  else if ((month == "february" && date >= 19 && date <= 29) || (month == "march" && date <= 20))
  {
    cout << "Your Astrological sign is : Pisces";
  }
}