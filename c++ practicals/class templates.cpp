#include <iostream>
using namespace std;

template<class t1,class t2>
class Meet
{
private:
  t1 a;
  t2 b;
public:
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
  Meet <int,int>m(5,6);
}
