#include<iostream>
using namespace std;

int g; ///global Variable

main()
{
  int a,b; // local Variable
  a = 10;
  b = 3;

  cout << a << endl << b << endl;
  g = a + b;
  cout << g;
}
