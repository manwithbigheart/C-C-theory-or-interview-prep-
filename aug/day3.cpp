#include <iostream>
using namespace std;
class Product{
  int id;
  string name;
  string description;
  float price;
  public:
  void setID() {
    cout << "Enter Product ID: ";
    cin >> id;
  }
  void setID(int newID)
  {
    id = newID;
  }
  int getID() {
    return id;
  }
};

int main()
{
  Product p,q;
  p.setID();
  cout << "Product ID of p: " << p.getID() << endl;
  q.setID(151);
  cout << "Product ID of q: " << q.getID() << endl;
  return 0;
}
