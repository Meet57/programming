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
};

main()
{
  Book b1,b2;

  cout << "Book 1:" << endl;
  b1.getdetails("OOPC",350,"KSV");
  b1.setdetails();

  cout << endl << "Book 2:" << endl;
  b2.getdetails("FOP",150,"KSV");
  b2.setdetails();
}
