#include<iostream>
using namespace std;

class Book
{
  string title;
  int price;
  string pub;
public:
  void getdetails(string a,int b,string c)
  {
    title = a;
    price = b;
    pub = c;
  }
  void setdetails()
  {
    cout << "Title:" << title << endl;
    cout << "Price:" << price << endl;
    cout << "Pub:" << pub << endl;
  }
  int price_get()
  {
    return price;
  }
  void Max_book(Book a1)
  {
    cout << endl << a1.title << ": is having Maximum Price" << endl;
  }
  friend Book maxbook(Book a1,Book a2);
};

Book maxbook(Book a1,Book a2)
{
  if (a1.price_get() < a2.price_get())
  {
    return a2;
  }
  else
  {
    return a1;
  }
}

main()
{
  Book b1,b2,b3;

  cout << "Book 1:" << endl;
  b1.getdetails("OOPC",350,"KSV");
  b1.setdetails();

  cout << endl << "Book 2:" << endl;
  b2.getdetails("FOP",150,"KSV");
  b2.setdetails();

  b3 = maxbook(b1,b2);

  b3.Max_book(b3);
}
