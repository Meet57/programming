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
  Book b[5];

  cout << "Book 1:" << endl;
  b[0].getdetails("OOPC",350,"KSV");
  b[0].setdetails();

  cout << endl << "Book 2:" << endl;
  b[1].getdetails("FOP",150,"KSV");
  b[1].setdetails();

  cout << endl << "Book 3:" << endl;
  b[2].getdetails("FME",420,"KSV");
  b[2].setdetails();

  cout << endl << "Book 4:" << endl;
  b[3].getdetails("BEEE",370,"KSV");
  b[3].setdetails();

  cout << endl << "Book 5:" << endl;
  b[4].getdetails("ECE",100,"KSV");
  b[4].setdetails();
}
