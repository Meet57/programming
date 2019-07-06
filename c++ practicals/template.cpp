#include<iostream>
using namespace std;

template <typename t1,typename t2>
void printdata(t1 a,t2 b)
{
  cout << endl << a << endl << b << endl;
}

main()
{
  int a = 10;
  float b = 20.22;
  string s = "Meet";

  printdata<int,int>(a,b);

  printdata<int,float>(b,b); // <> this will explicit change the type of the parameters passed

  printdata(b,s);
  printdata(s,a);

}
