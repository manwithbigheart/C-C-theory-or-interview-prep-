#include <iostream>
using namespace std;

int main()
{
  int month;
  int date;
  cout << "\n Enter the month(1-12): " << endl;
  cin >> month;
  cout << "\n Enter the date(1-31): " << endl;
  cin >> date;

  switch (month)
  {
  case 1:
    cout << "The season is Winter";
    break;
  case 2:
    cout << "The season is Winter";
    break;
  case 3:
    if (date<20)
    {
    cout << "The season is Winter";
    }
    else{
      cout << "The season is Spring";
    }
    break;
  case 4:
    cout << "The season is Spring";
    break;
  case 5:
    cout << "The season is Spring";
    break;
  case 6:
    if (date < 21)
    {
      cout << "The season is Spring";
    }
    else
    {
      cout << "The season is Summer";
    }
    break;
  case 7:
    cout << "The season is Summer";
    break;
  case 8:
    cout << "The season is Summer";
    break;
  case 9:
    if (date < 22)
    {
      cout << "The season is Summer";
    }
    else
    {
      cout << "The season is Autumn";
    }
    break;
  case 10:
    cout << "The season is Autumn";
    break;
  case 11:
    cout << "The season is Autumn";
    break;
  case 12:
    if (date < 21)
    {
      cout << "The season is Autumn";
    }
    else
    {
      cout << "The season is Winter";
    }
    break;

  default:
    break;
  }
}
