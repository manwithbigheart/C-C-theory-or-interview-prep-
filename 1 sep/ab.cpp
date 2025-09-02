#include <iostream>
using namespace std;

// constructor is type of function and it dont have return type.

class Book{
private:
  string title;
  int no_of_pages;
  string author;
  //int book_count;

public:
  static int book_count;
  void describe()
  {
    cout << "\n Title: " << title;
    cout << "\n author: " << author;
    cout << "\n Number of object: " << no_of_pages;
  }
  Book(){
    title="none";
    no_of_pages = 0;
    author="none";
    book_count++;
  }
  Book(string x, int y, string author_xyz)
  {
    title = x;
    no_of_pages = y;
    this->author = author_xyz;
    book_count++;
    // this->describe();
    Book::book_count++;
  }
   ~Book(){
    Book::book_count--;
    cout << "\n object destroyed " << Book::book_count;
  }
};
int Book::book_count=0;
int main()
{
  Book b1,b2("harry potter",200,"JK Rowling");
  Book *b6;
  b6 = new Book("Pirates", 300, "Rowling");
  b6->describe();
  
  b1.describe();
  b2.describe();

  cout<<"\n Total count: "<< Book::book_count;
}
