#include <iostream>
using namespace std;

template<class t1,class t2>
class Meet
{
private:
  t1 a;
  t2 b;
public:
    Meet(){
    }
  Meet(t1 x,t2 y)
  {
    a = x;
    b = y;
  }
  void printdata()
  {
    cout << endl << a << endl << b << endl ;
  }
  void getdata(t1 x,t2 y)
  {
    a = x;
    b = y;
  }
};

main()
{
Meet <int,int>pia(5,6.6),dhruv(1,2.2);
Meet <int,float>janki;

  janki.getdata(5,6.6);

  pia.printdata();
  dhruv.printdata();
  janki.printdata();
}
