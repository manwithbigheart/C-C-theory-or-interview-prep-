#include <iostream>
// tea stall v1
using namespace std;
int main()
{
  int choice;
  do
  {
    // menu
    cout << "\nchai wala .com";
    cout << "\n1.Tea";
    cout << "\n2.Coffe";
    cout << "\n3.Bun Maska";
    cout << "\n0.Exit";
    cout << "\n:";
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << "\n you selected Tea";
      cout << "\n Enter the number of cup you want to order : ";
      int qt;
      cin>> qt;
      cout << qt * 10 << " rs is your total billed amount";

      break;
    case 2:
      cout << "\n you selected Coffee";
      cout << "\n Enter the number of cup you want to order : ";
      int qt;
      cin >> qt;
      cout << qt * 20 << " rs is your total billed amount";
      break;
    case 3:
      cout << "\n you selected Bun-maska";
      cout << "\n Enter the number of Bun-maska you want to order : ";
      int qt;
      cin >> qt;
      cout << qt * 30 << " rs is your total billed amount";
      break;
    case 0:
      cout << "\n Visit again soon.....";
      break;
    default:
      cout << "\n Wrong option selected.";
      break;
    }
  } while (choice != 0); // User does not exit
}