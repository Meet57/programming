#include<iostream>
using namespace std;

class Complex
{
private:
  int r,i;
public:
  Complex()
  {
    i = r = 0;
  }
  Complex(int x,int y=0)
  {
    r = x;   i = y;
  }
  void print_complex()
  {
    cout << "real => " << r << endl << "Imaginary => " << i << endl << endl;
  }
  ~Complex()
  {
    cout << "Destructor" << endl;
  }
  friend Complex add_complex(Complex t1,Complex t2);
};

Complex add_complex(Complex t1,Complex t2)
{
  Complex temp(t1.r+t2.r,t2.i+t1.i);
  return temp;
}

main()
{
  Complex c1(2,3),c2(5,7),c3;

  c1.print_complex();
  c2.print_complex();
  c3 = add_complex(c1,c2);

  c3.print_complex();
}
