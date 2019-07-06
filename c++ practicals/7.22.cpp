#include<iostream>
#include<string.h>
using namespace std;

class Publication
{
protected:
  string title;
  float price;
public:
  void getdata()
  {
    cout << "Title:" ;
    cin >> title;
    cout << "Price:";
    cin >> price;
  }
};

class Tape : protected Publication
{
protected:
  float playtime;
public:
  void getdata_t()
  {
    getdata();
    cout << "Playtime:" << endl ;
    cin >> playtime;
  }
  void  putdata_t()
  {
    cout << "Title:" << title << endl
    << "Price" << price << endl
    << "Playtime" << playtime << endl;
  }
};

class Book : protected Publication
{
protected:
  int count;
public:
  void getdata_b()
  {
    getdata();
    cout << "Count:";
    cin >> count;
  }
  void putdata_b()
  {
    cout
    << "Title" << title << endl
    << "Price:" << price << endl
    << "Count:" << count << endl ;
  }
};

main()
{
  cout << "Enter details of Book:" << endl ;
  Book b;
  b.getdata_b();

  cout << endl << "Enter details of Tape:" << endl ;
  Tape t;
  t.getdata_t();

  cout << endl << endl << "Details of Book:" << endl;
  b.putdata_b();
  cout << endl << endl << "Details of Tape:" << endl;
  t.putdata_t();
}
