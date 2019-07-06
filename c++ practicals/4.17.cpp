#include<iostream>
using namespace std;

class Complex
{
  int r,i;
public:
  void setdetails()
  {
    r = i = 0;
  }
  void setdetails(int x)
  {
    r = i = x;
  }
  void setdetails(int x,int y)
  {
    r = x;
    i = y;
  }
  void getdetails()
  {
    cout << "real => " << r << endl << "Imaginary => " << i << endl << endl;
  }
};

main()
{
  Complex c1,c2,c3;

  c1.setdetails();
  c2.setdetails(3);
  c3.setdetails(5,7);

  c1.getdetails();
  c2.getdetails();
  c3.getdetails();
}
