#include <iostream>
#include <string>
using namespace std;

class Parent
{
protected:
  int bank_balance = 500000;                          // ghar ka paisa (sirf bacche dekh sakte hain)


private:
  int emergency_fund = 100000;                      // super secret paisa (sirf mummy-papa ko maloom)


public:
  string pt_FatherName = "Mr. Khan";
  string pt_MotherName = "Mrs. Khan";

  void showParentInfo()
  {
    cout << "Father: " << pt_FatherName << endl;
    cout << "Mother: " << pt_MotherName << endl;
  }
};

class Child : public Parent
{
public:
  string childName = "Chhotu";

  
  void showChildInfo()
  {
    cout << "Child: " << childName << endl;

    // child ko parent ka bank_balance access milta hai (protected hai)
    
    cout << "Bank Balance (inherited): " << bank_balance << endl;

    // emergency_fund nahi dekh sakta (private hai) ❌
    // cout << emergency_fund;  // error aayega

    cout << "Parents ka naam bhi inherit hua: "
         << pt_FatherName << " & " << pt_MotherName << endl;
  }
};b

int main()
{
  Child obj;
  obj.showParentInfo();
  obj.showChildInfo();
  return 0;
}