#include <iostream>
// tea stall v1
// set values tea 10INR coffee 40INR  bunmaska 100INR
// when one choses anything ask for quantity and tell total amount to pay for selected
// example 1.--->tea selected--->enter quantity -->2--->Total amount to pay 20INR
using namespace std;
int main()
{
  int choice;
  float tea = 10.00f, coffee = 40.00f, bm = 100.00f; // cost
  int tea_qty = 0, coffee_qty = 0, bm_qty = 0;       // quantity
  do
  {
    // menu
    cout << "\n==============";
    cout << "\nchai wala .com";
    cout << "\n==============";
    cout << "\n1.Tea";
    cout << "\n2.Coffe";
    cout << "\n3.Bun Maska";
    cout << "\n0.Exit";
    cout << "\n==============";
    cout << "\n:";
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << "\nyou selected Tea";
      cout << "\nHow many?";
      cin >> tea_qty;
      cout << "\nTotal amount to pay is:" << tea_qty * tea;
      break;
    case 2:
      cout << "\nyou selected Coffee";
      cout << "\nHow many?";
      cin >> coffee_qty;
      cout << "\nTotal amount to pay is:" << coffee_qty * coffee;
      break;
    case 3:
      cout << "\nyou selected Bun-maska";
      cout << "\nHow many?";
      cin >> bm_qty;
      cout << "\nTotal amount to pay is:" << bm_qty * bm;
      break;
    case 0:
      cout << "\nVisit again soon.....";
      break;
    default:
      cout << "\nwrong option selected.";
      break;
    }
  } while (choice != 0); // User does not exit
} 