#include<iostream>
using namespace std;

class Book
{
  string Name;
  float Price;
  static int sr_no,no_of_books;
  int stock;
public:
  void setdetails()
  {
    cout << "Name:";
    cin >> Name;
    cout << "Price:";
    cin >> Price;
    cout << "Stock:";
    cin >> stock;
    no_of_books = no_of_books + stock;
    sr_no++;
  }
  friend void getcount();
};

int Book::sr_no = 0;
int Book::no_of_books = 0;

void getcount()
{
  cout << endl <<"Number of books:" << Book::no_of_books << endl;
}

int main()
{
  Book b1,b2,b3;
  int n;

  cout << endl << "Book 1:" << endl;
  b1.setdetails();
  cout << endl << "Book 2:" << endl;
  b2.setdetails();
  cout << endl << "Book 3:" << endl;
  b3.setdetails();


  getcount();
}
